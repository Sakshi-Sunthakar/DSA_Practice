import java.util.*;

public class prims {

    int vg, mincost = 0;
    int cost[][], visited[];

    static Scanner in = new Scanner(System.in);

    prims(int n) {
        this.vg = n;
        this.visited = new int[n + 1];
        this.cost = new int[n + 1][n + 1];
    }

    void read() {
        System.out.println("Enter cost matrix ");
        for (int i = 1; i <= vg; i++) {
            for (int j = 1; j <= vg; j++) {
                cost[i][j] = in.nextInt();
            }

            visited[i] = 0;
        }
    }

    void prims() {

        int u = 0, v = 0, Et = 0, min = 0;
        visited[1] = 1;
        while (Et < vg - 1) {
            min = 999;
            for (int i = 1; i <= vg; i++) {
                for (int j = 1; j <= vg; j++) {
                    if (visited[i] != 0 && visited[j] == 0 && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
            Et++;

            System.out.println("Edge" + Et + "\t from " + u + "--->" + v + "cost:=" + min);

            mincost += min;
            visited[v] = 1;
            cost[u][v] = cost[v][u] = 999;

            System.out.println("The optimal cost of mst=" + mincost);

        }
    }

    public static void main(String agrs[]) {
        int n;
        System.out.println("Enter the number of nodes");
        n = in.nextInt();
        prims p = new prims(n);

        p.read();
        System.out.println("Minimum Spanning tree");
        p.prims();
    }

}

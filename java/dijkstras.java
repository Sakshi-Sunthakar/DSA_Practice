import java.util.*;

public class dijkstras {

    int cost[][], visited[], distance[], min, nodes, source, j;

    static Scanner in = new Scanner(System.in);

    dijkstras(int n) {
        this.nodes = n;

        this.visited = new int[n + 1];

        this.distance = new int[n + 1];

        this.cost = new int[n + 1][n + 1];

    }

    void read() {
        System.out.println("Enter the cost matrix ");
        for (int i = 1; i <= nodes; i++) {
            for (int j = 1; j <= nodes; j++) {
                cost[i][j] = in.nextInt();
            }
        }

        System.out.println("Enter the source vertex");
        source = in.nextInt();

        for (int i = 1; i <= nodes; i++) {
            distance[i] = cost[source][i];

            visited[i] = 0;
        }
    }

    void dijkstras() {
        int u = 0;
        min = 999;
        visited[source] = 1;

        for (int i = 1; i <= nodes; i++) {
            min = 999;
            for (int j = 1; j <= nodes; j++) {
                if ((visited[j] == 0) && (distance[j] < min)) {
                    min = distance[j];
                    u = j;
                }
            }

            visited[u] = 1;

            for (int j = 1; j <= nodes; j++) {

                if (visited[j] == 0 && distance[u] + cost[u][j] < distance[j]) {
                    distance[j] = distance[u] + cost[u][j];
                }
            }
        }
    }

    void display() {
        System.out.println("Single source shortest path to all other vertices");
        System.out.println("Source ----->node");

        for (int k = 1; k <= nodes; k++) {
            System.out.println("Source to " + k + " = " + distance[k]);
        }
    }

    public static void main(String args[]) {
        int n;

        System.out.println("Enter the value of n");
        n = in.nextInt();

        dijkstras d = new dijkstras(n);

        d.read();

        d.dijkstras();

        d.display();

    }

}

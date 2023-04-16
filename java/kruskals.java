import java.util.*;

public class kruskals {

    class Edge {
        int u, v, wt;
    }

    int V = 0, Eg, mincost = 0;

    int parent[];

    Edge ge[], te[];

    static Scanner sc = new Scanner(System.in);

    void read() {
        System.out.println("Enter the number of vertices ");
        V = sc.nextInt();

        System.out.println("Enter the number of Edges ");
        Eg = sc.nextInt();

        ge = new Edge[Eg];

        for (int i = 0; i < Eg; i++) {

            ge[i] = new Edge();

            System.out.println("Enter information Edge " + i);
            System.out.println("Vertices of edge (u,v)");
            ge[i].u = sc.nextInt();
            ge[i].v = sc.nextInt();

            System.out.println("Enter weight an of edge");
            ge[i].wt = sc.nextInt();

        }

    }

    void sortedge() {
        Edge t = new Edge();

        for (int i = 0; i < Eg - 1; i++) {
            for (int j = 0; j < Eg - i - 1; j++) {
                if (ge[j].wt > ge[j + 1].wt) {

                    t = ge[j];
                    ge[j] = ge[j + 1];
                    ge[j + 1] = t;

                }
            }
        }
    }

    void kruskals() {
        int Et = 0, j = 0, k = 0, i;

        te = new Edge[V - 1];

        parent = new int[V + 1];

        for (i = 1; i <= V; i++) {
            parent[i] = 0;
        }

        while (Et < V - 1 && j < Eg) {
            if (!Cycle(ge[j])) {

                te[k++] = ge[j];
                mincost = mincost + ge[j].wt;

                Et++;
            }

            j++;
        }

        System.out.println("The minimum cost spanning tree is");

        for (i = 0; i < V - 1; i++) {

            te[i] = new Edge();
            System.out.println("Edge(" + te[i].u + "," + te[i].v + ") with weight " + te[i].wt);
        }
        System.out.println("The cost of MST=" + mincost);
    }

    boolean Cycle(Edge e) {

        e = new Edge();

        int u = e.u;
        int v = e.v;

        while (parent[u] > 0) {
            u = parent[u];
        }

        while (parent[v] > 0) {
            u = parent[v];
        }

        if (u != v) {
            parent[u] = v;

            return false;
        }

        return true;

    }

    public static void main(String agrs[]) {

        kruskals k = new kruskals();

        k.read();
        k.sortedge();
        k.kruskals();
    }

}

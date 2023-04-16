import java.util.*;

public class floyd {

    int nodes, mincost = 0;
    int c[][], d[][];

    static Scanner in = new Scanner(System.in);

    floyd(int n) {
        this.nodes = n;
        this.c = new int[n + 1][n + 1];
        this.d = new int[n + 1][n + 1];
    }

    void read() {
        System.out.println("Enter the cost matrix ");
        for (int i = 1; i <= nodes; i++) {
            for (int j = 1; j <= nodes; j++) {
                c[i][j] = in.nextInt();
                d[i][j] = c[i][j];
            }
        }
    }

    int min(int a, int b) {
        return a < b ? a : b;
    }

    void floyd() {
        for (int k = 1; k <= nodes; k++) {
            for (int i = 1; i <= nodes; i++) {
                for (int j = 1; j <= nodes; j++) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }

    void display() {
        System.out.println("The all pair shortest path matrix");
        for (int i = 1; i <= nodes; i++) {
            for (int j = 1; j <= nodes; j++) {
                System.out.print(d[i][j] + "\t");
            }

            System.out.println("");
        }

    }

    public static void main(String args[]) {
        int n;

        System.out.println("Enter the number of nodes");
        n = in.nextInt();

        floyd f = new floyd(n);

        f.read();
        f.floyd();
        f.display();

    }

}

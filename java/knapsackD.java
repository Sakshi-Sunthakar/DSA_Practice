import java.util.*;

public class knapsackD {

    int v[][] = new int[10][10], w[], p[], m, n;

    static Scanner in = new Scanner(System.in);

    knapsackD(int n, int m) {
        this.n = n;

        this.m = m;

        this.w = new int[n + 1];

        this.p = new int[n + 1];
    }

    void read() {
        System.out.println("Enter the weight of each elements");
        for (int i = 1; i <= n; i++) {
            w[i] = in.nextInt();
        }

        System.out.println("Enter the profit of each elements");
        for (int i = 1; i <= n; i++) {
            p[i] = in.nextInt();
        }
    }

    void display() {
        System.out.println("Entered information of knapsack ");
        System.out.println("ITEM\tWEIGHT\tPROFIT");

        for (int i = 1; i <= n; i++) {
            System.out.println(i + "\t" + w[i] + "\t" + p[i]);
        }

        System.out.println("capacity of knapsack is " + m);

    }

    void displayknapsack() {
        System.out.println("The contents of the knapsack table are");
        {
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= m; j++) {
                    System.out.print(v[i][j] + " ");
                }

                System.out.println();
            }
        }

    }

    int max(int i, int j) {
        if (i > j) {
            return i;
        } else {
            return j;
        }
    }

    void knapsack() {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0 || j == 0) {
                    v[i][j] = 0;
                } else if (j - w[i] < 0) {
                    v[i][j] = v[i - 1][j];
                } else {
                    v[i][j] = max(v[i - 1][j], v[i - 1][j - w[i]] + p[i]);
                }
            }
        }
    }

    void optimal() {
        int i = n, j = m, item = 0;

        int x[] = new int[10];

        while (i != 0 && j != 0) {
            if (v[i][j] != v[i - 1][j]) {
                x[i] = 1;
                j = j - w[i];
            }
            i = i - 1;
        }

        System.out.println("Optimal solution " + v[n][m]);
        System.out.println("Selected items are");

        for (i = 1; i <= n; i++) {
            if (x[i] == 1) {

                System.out.println(i + " ");

                item = 1;

            }
        }

        if (item == 0) {
            System.out.println("NTL\t Sorry | No item can be placed in knapsack");
        }
    }

    public static void main(String args[]) {
        System.out.println("*****Knapsack using Dynamic******");

        System.out.println("Enter the numer of items");
        int n = in.nextInt();

        System.out.println("Enter the capacity of knapsack");
        int m = in.nextInt();

        knapsackD k = new knapsackD(n, m);

        k.read();

        k.display();

        k.knapsack();

        k.displayknapsack();

        k.optimal();

    }
}

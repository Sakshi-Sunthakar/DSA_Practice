import java.util.*;

public class knapsackG {

    int m, n;
    float[] w;
    float[] p;
    float[] ratio;

    Scanner in = new Scanner(System.in);

    knapsackG(int n, int m) {
        this.n = n;
        this.m = m;
        this.w = new float[n + 1];
        this.p = new float[n + 1];
    }

    void read() {
        System.out.println("Enter the weight of each item");
        for (int i = 1; i <= n; i++) {
            w[i] = in.nextFloat();
        }

        System.out.println("Enter the profit of each item");
        for (int i = 1; i <= n; i++) {
            p[i] = in.nextFloat();
        }

        ratio = new float[n + 1];
        for (int i = 1; i <= n; i++) {
            ratio[i] = p[i] / w[i];
        }

    }

    void display() {
        System.out.println("ITEM\tWEIGHT\tPROFIT\tRATIO");

        for (int i = 1; i <= n; i++) {
            System.out.println(i + "\t" + w[i] + "\t" + p[i] + "\t" + ratio[i]);
        }
    }

    void sortarray() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n - i; j++) {
                float temp;
                if (ratio[j] < ratio[j + 1]) {
                    temp = ratio[j];
                    ratio[j] = ratio[j + 1];
                    ratio[j + 1] = temp;

                    temp = w[j];
                    w[j] = w[j + 1];
                    w[j + 1] = temp;
 
                    temp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = p[j];
                }
            }
        }
    }

    void knapsack(int u) {
        int i;
        float[] x = new float[10];
        float tp = 0;

        for (i = 1; i <= n; i++) {
            x[i] = 0;
        }

        for (i = 1; i <= n; i++) {
            if (w[i] > u) {
                break;
            } else {
                x[i] = 1;
                u = (int) (u - w[i]);
                tp = tp + p[i];
            }
        }

        if (i < n) {
            x[i] = u / w[i];
            tp = tp + (x[i] * p[i]);
        }

        System.out.print("Result are =");
        for (i = 1; i <= n; i++) {
            System.out.print("\t" + x[i]);
        }
        System.out.println("\n");
        System.out.println("Maximum profit is =" + tp);
    }

    public static void main(String args[]) {

        int m, n;
        float[] w = new float[10];
        float[] p = new float[10];
        float[] ratio = new float[10];

        Scanner in = new Scanner(System.in);

        System.out.println("**********Knacpsack problem**********");
        System.out.println("Enter the total number of items");
        n = in.nextInt();

        System.out.println("Enter the knapsack capacity");
        m = in.nextInt();

        knapsackG k = new knapsackG(n, m);

        k.read();

        System.out.println("Inputs to knapsack problem are");
        System.out.println("Capacity of knapsack =" + m);

        k.display();

        k.sortarray();

        System.out.println("Detials after sorting the items according to profit/weight ratio in decrease order are ");

        k.display();

        k.knapsack(m);

    }
}

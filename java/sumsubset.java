import java.util.*;

public class sumsubset {

    int[] set;
    int[] x;
    int sum, RT = 0, n;

    boolean flag = false;

    static Scanner in = new Scanner(System.in);

    sumsubset(int n) {
        this.set = new int[n];
        this.x = new int[n];
        this.n = n;
    }

    boolean read() {
        System.out.println("Enter the set");

        for (int i = 0; i < n; i++) {
            set[i] = in.nextInt();
            x[i] = 0;
            RT += set[i];
        }

        System.out.println("Enter sum");

        sum = in.nextInt();

        if (sum > RT) {
            return false;
        }

        return true;
    }

    void subset(int k, int PS, int RT) {
        if (sum == PS) {
            flag = true;

            System.out.print("The solution is {");
            for (int i = 0; i < k; i++) {
                if (x[i] == 1) {
                    System.out.print(set[i] + ",");
                }
            }

            System.out.println("}=" + sum);
        } else if (((PS + RT) >= sum) && ((PS + set[k]) <= sum)) {
            x[k] = 1;

            subset(k + 1, PS + set[k], RT - set[k]);

            x[k] = 0;

            subset(k + 1, PS, RT - set[k]);
        }
    }

    public static void main(String args[]) {
        int n;

        System.out.println("Enter the number of elements in a set");
        n = in.nextInt();

        sumsubset ss = new sumsubset(n);

        ss.read();
        ss.subset(0, 0, ss.RT);

        if (!ss.flag) {
            System.out.println("No solutions");
        }
    }

}

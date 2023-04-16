import java.util.*;

public class rotatedhalfpyramid {
    public static void main(String args[]) {
        int n, m;
        Scanner sc = new Scanner(System.in);

        System.out.print("n(rows)=");
        n = sc.nextInt();

        for (int i = n; i >= 1; i--) {

            for (int j = 1; j < i; j++) {
                System.out.print(" ");
            }

            for (int j = 0; j <=n - i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }

    }
}

import java.util.*;

public class invertedhalfpyramid {
    public static void main(String args[]) {
        int n, m;
        Scanner sc = new Scanner(System.in);

        System.out.print("n(rows)=");
        n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}

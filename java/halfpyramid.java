import java.util.*;

public class halfpyramid {
    public static void main(String args[]) {
        int n, m;
        Scanner sc = new Scanner(System.in);

        System.out.print("n(rows)=");
        n = sc.nextInt();

        for (int i = 0; i <=n; i++) {
            for (int j = 0; j <=i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}

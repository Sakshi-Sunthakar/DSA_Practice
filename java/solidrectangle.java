import java.util.*;

public class solidrectangle {

    public static void main(String args[]) {
        int n, m;
        Scanner sc = new Scanner(System.in);

        System.out.print("n(rows)=");
        n = sc.nextInt();
        System.out.print("m(columns)=");
        m = sc.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print("*");
            }

            System.out.print("\n");
        }
    }

}

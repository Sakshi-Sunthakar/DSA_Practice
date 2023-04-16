import java.util.*;

public class exception {

    public static void main(String agrs[]) {
        int a, b, ans, c;

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the value of a");

        a = in.nextInt();

        System.out.println("Enter the value of b");

        b = in.nextInt();

        try {

            if (b == 0) {
                throw new ArithmeticException("Divided by zero");
            }
            ans = a / b;

            System.out.println(a + "/" + b + "=" + ans);

        } catch (ArithmeticException e) {
            System.out.println("Exception caught " + e);
        } finally {
            System.out.println("THANK YOU");
        }
    }
}

import java.util.*;

class prime {

    int scan() {
        int num;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number ");

        num = sc.nextInt();

        return num;
    }

    void check(int num) {

        int flag = 0;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            System.out.println(" The given number is prime");
        } else {
            System.out.println("The given number is not prime ");

        }
    }
}

public class test {

    public static void main(String[] args) {
        prime p = new prime();
        int x = p.scan();
        p.check(x);
    }

}

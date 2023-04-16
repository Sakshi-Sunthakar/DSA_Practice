import java.util.*;

class customer1 {
    String name;
    String DOB;

    Scanner in = new Scanner(System.in);

    void read() {
        System.out.println("Enter name ");
        name = in.next();

        System.out.println("Enter Date of birth");
        DOB = in.next();
    }

    void display() {
        StringTokenizer st = new StringTokenizer(DOB, "/");
        System.out.print(name);
        while (st.hasMoreTokens()) {
            System.out.print("," + st.nextToken());
        }

        System.out.println("");
    }

}

public class customer {
    public static void main(String args[]) {
        customer1 c = new customer1();
        c.read();
        c.display();
    }
}
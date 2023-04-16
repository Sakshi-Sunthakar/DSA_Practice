import java.io.*;
import java.util.*;

public class info {

    String Name;
    String USN;
    String branch;
    String Phone;

    Scanner sc = new Scanner(System.in);

    void read() {
        System.out.println("Enter the Name");
        Name = sc.next();
        System.out.println("Enter the USN");
        USN = sc.next();
        System.out.println("Enter the Branch");
        branch = sc.next();
        System.out.println("Enter the Phone");
        Phone = sc.next();

    }

    void display() {
        System.out.println("\t" + Name + "\t" + USN + "\t" + branch + "\t" + Phone);
    }

    public static void main(String args[]) {
        int n;
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number of student");

        n = in.nextInt();

        info arr[] = new info[n];

        for (int i = 0; i < n; i++) {
            System.out.println("Enter the information of " + (i + 1) + " student");

            arr[i] = new info();
            arr[i].read();
        }

        System.out.println("Student Information ");
        System.out.println("S NO \t NAME \t USN \t BRANCH \t PHONE \t");
        for (int i = 0; i < n; i++) {
            System.out.println(i + 1);
            arr[i].display();
        }

    }

}

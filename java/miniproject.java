import java.util.*;
import java.io.*;

public class miniproject {

    public static void main(String[] args) {

        int user_number;
        Scanner sc = new Scanner(System.in);
        int Random_number = (int) (Math.random() * 100);

        do {
            System.out.println("Guess Any number for (1-100)");
            user_number = sc.nextInt();

            if (Random_number == user_number) {
                System.out.println("Woohoo...!! it is correct number ");
                break;
            } else if (user_number > Random_number) {
                System.out.println("Your number is too large ");
            } else {
                System.out.println("Your number is too smaller");
            }

        } while (user_number >= 0);

        System.out.println("Random_number is ::" + Random_number);
    }

}

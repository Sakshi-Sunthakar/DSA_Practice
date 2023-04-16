import java.util.*;

class randthread extends Thread {
    Random rm = new Random();

    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Random no" + rm.nextInt(100));

            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                ex.printStackTrace();
            }
        }
    }
}

class squthread extends Thread {
    int num;

    squthread(int n) {
        num = n;
    }

    public void run() {
        for (int i = 1; i <= num; i++) {
            System.out.println("Sqaure of" + i + "=" + (i * i));
        }
    }
}

class cubethread extends Thread {
    int num;

    cubethread(int n) {
        num = n;
    }

    public void run() {
        for (int i = 1; i <= num; i++) {
            System.out.println("cube of" + i + "=" + (i * i * i));
        } 
    }
}

public class thread {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Enter the value of n=");
        n = in.nextInt();

        randthread rt = new randthread();
        squthread st = new squthread(n);
        cubethread ct = new cubethread(n);

        rt.start();
        st.start();
        ct.start();

    }

}

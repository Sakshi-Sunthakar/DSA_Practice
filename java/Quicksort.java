import java.util.*;

public class Quicksort {

    int a[], num;

    static Scanner in = new Scanner(System.in);

    Random rm = new Random();

    Quicksort(int n) {
        this.num = n;
        this.a = new int[n];
    }

    void swap(int i, int j) {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    void read() {
        for (int i = 0; i < num; i++) {
            a[i] = rm.nextInt(num - 1) + 1;
        }
    }

    int findpivot(int l, int r) {
        int p = a[l];
        int i = l, j = r + 1;

        do {
            do {
                ++i;
            } while (a[i] < p && i <= r);

            do {
                --j;
            } while (a[j] > p && j >= l);

            if (i < j) {
                swap(i, j);
            }

        } while (i < j);

        swap(l, j);

        return j;

    }

    void Quick(int low, int high) {
        int pivot;

        if (low < high) {
            pivot = findpivot(low, high);

            Quick(low, pivot - 1);

            Quick(pivot + 1, high);
        }

    }

    void display() {
        for (int i = 0; i < num; i++) {
            System.out.println(a[i]);
        }
    }

    public static void main(String[] args) {
        int n;
        System.out.println("Enter the value of n");
        n = in.nextInt();

        Quicksort q = new Quicksort(n);

        q.read();

        System.out.println("Elements before swapping ");

        q.display();

        q.Quick(0, n - 1);

        System.out.println("Elements after swapping");

        q.display();

    }

}

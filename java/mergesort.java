import java.util.*;

public class mergesort {

    int a[];
    int num;

    static Scanner in = new Scanner(System.in);
    Random rm = new Random();

    mergesort(int n) {
        this.num = n;
        this.a = new int[n];
    }

    void read() {
        for (int i = 0; i < num; i++) {
            a[i] = rm.nextInt(num - 1) + 1;
        }
    }

    void display() {
        for (int i = 0; i < num; i++) {
            System.out.println(a[i]);
        }
    }

    void mergesort(int low, int high) {
        int mid;
        if (low < high) {
            mid = (low + high) / 2;

            mergesort(low, mid);
            mergesort(mid + 1, high);

            merge(low, mid, high);

        }
    }

    void merge(int low, int mid, int high) {
        int i, j, k, h;
        i = h = low;
        j = mid + 1;

        int[] b = new int[a.length];

        while (i <= mid && j <= high) {
            if (a[i] <= a[j]) {
                b[h++] = a[i++];
            } else {
                b[h++] = a[j++];
            }
        }

        if (i > mid) {
            for (k = j; k <= high; k++) {
                b[h++] = a[k];
            }
        } else {
            for (k = i; k <= mid; k++) {
                b[h++] = a[k];
            }
        }

        for (k = low; k <= high; k++) {
            a[k] = b[k];
        }
    }

    public static void main(String args[]) {
        int n;

        System.out.println("Enter the value of n");
        n = in.nextInt();

        mergesort m = new mergesort(n);

        m.read();

        System.out.println("Elements before sorting");

        m.display();

        m.mergesort(0, n - 1);

        System.out.println("Elementts after sorting");

        m.display();
    }

}

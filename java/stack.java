import java.util.*;

class implement {

    private int top;
    private int stk[];

    implement(int size) {

        top = -1;

        stk = new int[size];
    }

    void push(int data) {
        if (top == stk.length - 1) {
            System.out.println("Stack is full");
        } else {

            stk[++top] = data;

            System.out.println("Element pushed is :" + stk[top]);
        }
    }

    int pop() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.println("Element poped is ::" + stk[top]);
        }
        return stk[top--];
    }

    void display() {
        if (top < 0) {
            System.out.println("Stack is empty:");
        } else {
            System.out.println("The contents of Stack is ::");
            for (int i = top; i >= 0; i--) {
                System.out.println(stk[i] + " ");
            }
        }
    }

}

public class stack {

    public static void main(String args[]) {
        int ch, size;

        Scanner in = new Scanner(System.in);

        System.out.println("Enter the size of stack");
        size = in.nextInt();
        boolean x = true;
        implement i = new implement(size);

        do {
            System.out.println("---Stack operation in java---");
            System.out.println("1)Push\t2)Pop\t3)Display\t4)Exit");

            ch = in.nextInt();

            switch (ch) {
                case 1:
                    System.out.println("Enter the Element ");
                    i.push(in.nextInt());
                    break;
                case 2:
                    i.pop();
                    break;
                case 3:
                    i.display();
                    break;
                case 4:
                    x = false;
                    System.out.println("exit ");
            }

        } while (x == true);

    }

}

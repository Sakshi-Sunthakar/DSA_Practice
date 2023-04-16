
import java.util.*;

class staff {

    protected int staff_id;
    protected String Name;
    protected String Phone;
    protected int salary;

    Scanner sc = new Scanner(System.in);

    protected void read() {
        System.out.println("Enter the Staff ID");
        staff_id = sc.nextInt();
        System.out.println("Enter the NAme");
        Name = sc.next();
        System.out.println("Enter the PHONE no");
        Phone = sc.next();
        System.out.println("Enter the Salary");
        salary = sc.nextInt();
    }

}

class teaching extends staff {
    protected String domain;

    protected String publisher;

    protected void read() {
        super.read();
        System.out.println("Enter the Domain");
        domain = sc.next();
        System.out.println("Enter the publisher");
        publisher = sc.next();
    }

    protected void display() {
        System.out.println(Name + "\t " + staff_id + "\t" + Phone + "\t" + salary);
    }

}

class technical extends staff {
    protected int n;

    protected String[] skill;

    protected void read() {
        super.read();
        System.out.println("Enter the skills");
        n = sc.nextInt();

        skill = new String[n];

        for (int i = 0; i < n; i++) {
            System.out.println("Enter the Skills" + (i + 1));
            skill[i] = sc.next();
        }
    }

    protected void display() {
        System.out.println(Name + "\t " + staff_id + "\t" + Phone + "\t" + salary);
        for (int i = 0; i < skill.length; i++) {
            System.out.println(skill[i] + ",");
        }
    }

}

class contractor extends staff {

    protected int period;

    protected void read() {
        super.read();
        System.out.println("Enter the period");
        period = sc.nextInt();
    }

    protected void display() {
        System.out.println(Name + "\t " + staff_id + "\t" + Phone + "\t" + salary + "\t" + period);
    }

}

class inheritance {
    public static void main(String args[]) {
        int m, n, o;

        Scanner in = new Scanner(System.in);

        teaching[] teach;
        technical[] tech;
        contractor[] con;

        System.out.println("Enter the no of Teaching staff");
        m = in.nextInt();

        teach = new teaching[m];
        for (int i = 0; i < m; i++) {
            teach[i] = new teaching();
            System.out.println("Enter the  Teaching staff details ");
            teach[i].read();
        }

        System.out.println("Enter the no of Teachnical staff");
        n = in.nextInt();

        tech = new technical[m];
        for (int i = 0; i < n; i++) {
            tech[i] = new technical();
            System.out.println("Enter the  Technical staff details ");
            tech[i].read();
        }

        System.out.println("Enter the no of contrastor staff");
        o = in.nextInt();

        con = new contractor[m];
        for (int i = 0; i < o; i++) {
            con[i] = new contractor();
            System.out.println("Enter the  Teaching staff details ");
            con[i].read();
        }

        System.out.println("Teaching staff  details are ");
        System.out.println("NAME \t STAFF_ID \t PHONE \t SALARY \t DOMAIN \t PUBLISHER");
        for (int i = 0; i < m; i++) {
            teach[i].display();
        }

        System.out.println("Technical staff  details are ");
        System.out.println("NAME \t STAFF_ID \t PHONE \t SALARY ");

        for (int i = 0; i < m; i++) {
            tech[i].display();
        }

        System.out.println("contractor staff  details are ");
        System.out.println("NAME \t STAFF_ID \t PHONE \t SALARY \tCONTRACTOR ");

        for (int i = 0; i < m; i++) {
            con[i].display();
        }

    }
}

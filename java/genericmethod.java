import java.io.*;
import java.util.*;

class genericmethod {

    static <T> void genericprint(T t) {
        System.out.println(t);
    }

    public static void main(String agrs[]) {

        genericprint(79);
        genericprint("2JR20CS079");

    }

}

import java.util.*;

public class A_Petya_and_Strings {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next(), b = sc.next();
        a = a.toLowerCase();
        b = b.toLowerCase();
        int result = a.compareTo(b);
        if (result > 0) {
            System.out.println(1);
        } else if (result < 0) {
            System.out.println(-1);
        } else
            System.out.println(0);
        sc.close();
    }
}
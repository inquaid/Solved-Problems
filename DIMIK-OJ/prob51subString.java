import java.util.*;

public class prob51subString {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s, ss;

        while (t-- > 0) {
            s = sc.next();
            ss = sc.next();
            System.out.println(s.indexOf(ss));
        }
        sc.close();
    }
}

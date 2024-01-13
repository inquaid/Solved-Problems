import java.util.*;

public class A_New_Palindrome {
    public static void check(String s, int n) {
        for (int i = 0; i < n - 1; i++) {
            if (s.charAt(i) != s.charAt(i + 1)) {
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
        return;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        String s;
        while (T-- > 0) {
            s = sc.next();
            check(s, s.length() / 2);
        }
        sc.close();
    }
}
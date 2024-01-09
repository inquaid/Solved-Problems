import java.util.*;

public class prob30PerfectNumber {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        String s;

        while (T-- > 0) {
            s = sc.next();
            if (s.matches("6") || s.matches("28") || s.matches("496") || s.matches("8128") || s.matches("33550336")
                    || s.matches("8589869056")
                    || s.matches("137438691328") || s.matches("2305843008139952128")) {
                System.out.println("YES, " + s + " is a perfect number!");
            }

            else
                System.out.println("NO, " + s + " is not a perfect number!");

        }
sc.close();
    }
}

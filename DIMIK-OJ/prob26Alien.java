import java.util.*;

public class prob26Alien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), cnt;
        double n;
        while (T-- > 0) {
            cnt = 0;
            n = sc.nextDouble();
            while (n > 1.00) {
                cnt++;
                n /= 2.0;
            }
            System.out.println(cnt + " days");
        }
        sc.close();
    }
}

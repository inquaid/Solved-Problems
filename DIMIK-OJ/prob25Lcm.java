import java.util.*;

public class prob25Lcm {
    public static long gcd(long a, long b) {
        if (b == 0) {
            return a;
        } else
            return gcd(b, a % b);
    }

    public static long lcm(long a, long b) {
        return (a * b) / gcd(a, b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long T = sc.nextLong(), a, b;

        while (T-- > 0) {
            a = sc.nextLong();
            b = sc.nextLong();
            System.out.println("LCM = " + lcm(a, b));

        }
        sc.close();
    }
}

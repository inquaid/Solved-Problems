import java.util.*;

public class prob42SumOfSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n;
        while (t-- > 0) {
            n = sc.nextInt();
            do {
                if (n >= 2) {
                    System.out.print("2^");
                    System.out.print(n + " + ");
                } else if (n == 1) {
                    System.out.print("2 + ");
                } else
                    System.out.println(1);
            } while (n-- > 0);
        }

        sc.close();
    }
}

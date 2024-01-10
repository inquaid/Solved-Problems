import java.util.*;

public class prob40SumOfSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long T = sc.nextLong();
        long x, k;

        while (T-- > 0) {
            x = sc.nextLong();
            k = sc.nextLong();
            System.out.print("Result = ");
            if (x == 1) {
                System.out.println(k + 1);
            } else
                System.out.println((long) (1 - Math.pow(x, k + 1)) / (1 - x));
        }

        sc.close();
    }
}

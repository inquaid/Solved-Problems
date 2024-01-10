import java.util.*;

public class prob41SumOfScquence2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            double e = 0, fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
                e += (i / fact);
            }
            System.out.printf("%.4f\n", e);
        }
        sc.close();
    }
}

import java.util.*;

public class prob43Calculation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            double p, q, c, result = 1;
            p = sc.nextDouble();
            q = sc.nextDouble();
            c = sc.nextDouble();
            for (int i = 0; i < q; i++) {
                result = (result * p) % c;
            }
            System.out.println("Result = " + (int) result);
        }

        sc.close();
    }
}

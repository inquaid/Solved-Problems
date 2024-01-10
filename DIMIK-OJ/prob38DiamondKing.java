import java.util.*;

public class prob38DiamondKing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt(), m = sc.nextInt();
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
                    System.out.print(m + " ");
                }
                System.out.println(m);

            }
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n - 1; j++) {
                    System.out.print(m + " ");
                }
                // System.out.print(m);
                System.out.println(m);

            }
            System.out.println();
        }
        sc.close();
    }
}

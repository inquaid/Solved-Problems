import java.util.*;

public class prob24AlternativeElements2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n, temp;
        while (t-- > 0) {
            n = sc.nextInt();
            for (int i = 0; i < n; i++) {
                temp = sc.nextInt();
                if ((i == n - 1 || i == n - 2) && i % 2 == 0) {
                    System.out.print(temp);
                } else if (i % 2 == 0) {
                    System.out.print(temp + " ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
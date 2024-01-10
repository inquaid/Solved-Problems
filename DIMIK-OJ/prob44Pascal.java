import java.util.*;

public class prob44Pascal {
    public static void print(int row) {
        for (int i = 0; i <= row; i++) {

            for (int j = 0; j <= i; j++) {

                if (BC(i, j) == 1 && i == j) {
                    System.out.println("1");
                } else
                    System.out.print(BC(i, j) + " ");
            }

        }
    }

    public static int BC(int n, int k) {
        if (k == 0 || k == n) {
            return 1;
        } else
            return BC(n - 1, k - 1) + BC(n - 1, k);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            print(n);
            System.out.println();
        }
        sc.close();
    }
}
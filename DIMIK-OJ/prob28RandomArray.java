import java.util.*;

public class prob28RandomArray {
    public static boolean Bcheck(int[] ary, int size) {
        for (int i = 0; i < size - 1; i++) {
            if (ary[i] < ary[i + 1]) {
                return false;
            }
        }
        return true;
    }

    public static boolean Scheck(int[] ary, int size) {
        for (int i = 0; i < size - 1; i++) {
            if (ary[i] > ary[i + 1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), n;
        while (T-- > 0) {

            n = sc.nextInt();
            int[] ary = new int[n];
            for (int i = 0; i < n; i++) {
                ary[i] = sc.nextInt();
            }
            if (Bcheck(ary, n) || Scheck(ary, n)) {
                System.out.println("YES");
            } else
                System.out.println("NO");

        }
        sc.close();
    }
}

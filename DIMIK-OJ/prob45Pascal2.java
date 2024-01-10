import java.util.*;
import java.math.BigInteger;

public class prob45Pascal2 {
    static StringBuilder[] sb = new StringBuilder[51];

    public static void print() {
        String s;
        int cnt = 0;
        for (int i = 0; i < 51; i++) {
            sb[cnt] = new StringBuilder();
            s = "";
            for (int j = 0; j <= i; j++) {
                if (i == j && BC(i, j).equals(BigInteger.ONE)) {
                    s += "1";
                    // System.out.println("1");
                } else {
                    s += BC(i, j).toString();
                    s += " ";
                    // System.out.print(BC(i, j) + " ");
                }
            }
            sb[cnt++].append(s);
        }
    }

    public static BigInteger BC(int n, int k) {
        BigInteger[] fact = new BigInteger[n + 1];
        fact[0] = BigInteger.ONE;
        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1].multiply(BigInteger.valueOf(i));
        }
        return fact[n].divide(fact[k].multiply(fact[n - k]));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        print();
        while (t-- > 0) {
            int n = sc.nextInt();
            for (int i = 0; i <= n; i++) {
                System.out.println(sb[i]);
            }
            System.out.println();
        }
        sc.close();
    }
}

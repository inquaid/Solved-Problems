import java.util.*;

public class prob22Prime {
    static boolean ary[] = new boolean[100001];

    static void seive() {
        Arrays.fill(ary, true);
        ary[0] = ary[1] = false;
        for (int i = 2; i * i <= 100000; i++) {
            if (ary[i]) {
                for (int j = i * i; j <= 100000; j += i) {
                    ary[j] = false;
                }
            }
        }

    }

    public static void main(String[] args) {
        seive();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a, b, cnt;
        while (t-- > 0) {
            a = sc.nextInt();
            b = sc.nextInt();
            cnt = 0;
            for (int i = a; i <= b; i++) {
                if (ary[i]) {
                    cnt++;
                }
            }
            System.out.println(cnt);
        }
        sc.close();
    }
}

import java.util.*;

public class prob231A2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), temp, cnt = 0;
        while (T-- > 0) {
            temp = sc.nextInt() + sc.nextInt() + sc.nextInt();
            if (temp > 1) {
                cnt++;
            }

        }
        System.out.println(cnt);
        sc.close();
    }
}

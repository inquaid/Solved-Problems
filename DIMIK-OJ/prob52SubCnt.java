import java.util.*;

public class prob52SubCnt {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), cnt, strt;
        String s, ss;

        while (t-- > 0) {
            cnt = 0;
            s = sc.next();
            ss = sc.next();
            strt = s.indexOf(ss);
            while (strt != -1) {
                cnt++;
                strt = s.indexOf(ss, strt + 1);
            }
            System.out.println(cnt);

        }
        sc.close();
    }
}

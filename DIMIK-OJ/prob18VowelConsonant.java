import java.util.*;

public class prob18VowelConsonant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), size, i, j, cnt = 0;
        sc.nextLine();
        String s;
        StringBuilder print = new StringBuilder();
        char[] ary = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        int sz = ary.length;
        while (T-- > 0) {
            s = sc.nextLine();
            size = s.length();
            for (i = 0; i < size; i++) {
                cnt = 0;
                for (j = 0; j < sz; j++) {
                    if (s.charAt(i) == ary[j]) {
                        System.out.print(ary[j]);
                        cnt++;
                        break;

                    }
                }
                if (s.charAt(i) == ' ') {
                    continue;
                } else if (cnt == 0) {

                    print.append(s.charAt(i));
                }

            }

            System.out.println();
            System.out.println(print.toString());
            print.setLength(0);
        }
    }
}

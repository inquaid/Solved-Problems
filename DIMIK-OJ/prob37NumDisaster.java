import java.util.*;

public class prob37NumDisaster {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        String s;
        char c;
        while (T-- > 0) {
            sb.setLength(0);
            s = sc.next();
            sb.append(s);
            int size = s.length();
            for (int i = 0, j = size - 1; i < j; j--, i++) {
                c = sb.charAt(i);
                sb.setCharAt(i, sb.charAt(j));
                sb.setCharAt(j, c);
            }
            s = sb.toString();
            System.out.println(Integer.parseInt(s));
        }
        sc.close();
    }
}

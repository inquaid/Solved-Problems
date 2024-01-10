import java.util.*;

public class prob50LeftRight {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), size, i;
        String s;

        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            sb.setLength(0);
            s = sc.next();
            sb.append(s);
            size = s.length();

            for (i = 0; i < size; i++) {
                if (sb.charAt(i) == 'L' && i != 0) {
                    sb.setCharAt(i, sb.charAt(i - 1));
                }
                if (sb.charAt(i) == 'R' && i + 1 != size) {
                    sb.setCharAt(i, sb.charAt(i + 1));
                }

            }
            System.out.println(sb);
        }
    }
}
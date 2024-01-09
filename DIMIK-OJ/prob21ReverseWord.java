import java.util.*;

public class prob21ReverseWord {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), size, i, j;
        sc.nextLine();
        String input = "";
        StringBuilder s = new StringBuilder(input);
        char c;
        while (T-- > 0) {
            s.setLength(0);
            input = sc.nextLine();
            s.append(input);
            size = s.length();
            for (i = 0, j = size - 1; i < j; i++, j--) {
                c = s.charAt(i);
                s.setCharAt(i, s.charAt(j));
                s.setCharAt(j, c);
            }
            System.out.println(s);
        }
    }
}

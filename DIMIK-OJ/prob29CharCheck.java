import java.util.*;

public class prob29CharCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c;
        int T = sc.nextInt();
        while (T-- > 0) {
            c = sc.next().charAt(0);

            if (Character.isAlphabetic(c)) {
                if (Character.isUpperCase(c)) {
                    System.out.println("Uppercase Character");
                } else
                    System.out.println("Lowercase Character");
            } else {
                if (Character.isDigit(c)) {
                    System.out.println("Numerical Digit");
                } else
                    System.out.println("Special Characters");
            }
        }
        sc.close();
    }
}

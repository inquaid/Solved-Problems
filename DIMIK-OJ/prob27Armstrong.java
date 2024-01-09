import java.util.*;

public class prob27Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n, sum;
        while (t-- > 0) {
            n = sc.nextInt();
            sum = 0;
            sum += Math.pow(n % 10, 3);
            sum += Math.pow((n / 10) % 10, 3);
            sum += Math.pow(n / 100, 3);
            if (sum == n) {
                System.out.println(n + " is an armstrong number!");
            } else
                System.out.println(n + " is not an armstrong number!");
        }
    sc.close();
    }
}

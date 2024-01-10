import java.util.*;

public class prob35OutOfCycle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long T = sc.nextLong();
        while (T-- > 0) {
            long xc = sc.nextLong(), yc = sc.nextLong(), r = sc.nextLong(), x = sc.nextLong(), y = sc.nextLong();
            if (Math.sqrt(Math.pow(xc - x, 2) + Math.pow(yc - y, 2)) <= r) {
                System.out.println("The point is inside the circle");
            } else
                System.out.println("The point is not inside the circle");

        }
        sc.close();
    }
}

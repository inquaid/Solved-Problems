import java.util.*;

public class prob46Area {
    public static double area(double a, double b, double c) {
        double s = (a + b + c) / 2;
        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        double a, b, c;
        while (t-- > 0) {
            a = sc.nextDouble();
            b = sc.nextDouble();
            c = sc.nextDouble();
            System.out.printf("Area = %.3f\n", area(a, b, c));
        }
        sc.close();
    }

}

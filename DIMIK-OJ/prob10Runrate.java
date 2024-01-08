import java.util.Scanner;

public class prob10Runrate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        double over, ball, ttl, crnt;
        for (int i = 0; i < t; i++) {
            over = 50;
            ttl = sc.nextDouble() + 1.0;
            crnt = sc.nextDouble();
            ball = sc.nextDouble();

            ball /= 6;
            over -= ball;
            System.out.printf("%.2f", (crnt / over));
            System.out.print(" ");
            System.out.printf("%.2f\n", Math.max(0, (ttl - crnt) / ball));

        }

        sc.close();
    }
}
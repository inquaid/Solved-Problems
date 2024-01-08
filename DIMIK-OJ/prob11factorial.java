import java.util.Scanner;

public class prob11factorial {

  public static long fact(long n) {
    if (n == 1) {
      return n;
    } else
      return n * fact(n - 1);
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long t = sc.nextLong();
    long n;
    while (t-- > 0) {
      n = sc.nextLong();
      System.out.println(fact(n));
    }
    sc.close();
  }
}
import java.util.Scanner;
import java.math.BigInteger;

public class prob9Sqrt {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    BigInteger temp;
    while (t-- > 0) {
      temp = sc.nextBigInteger();

      boolean isSqr = temp.sqrtAndRemainder()[1].equals(BigInteger.ZERO);
      if (isSqr) {
        System.out.println("YES");
      } else
        System.out.println("NO");

    }
    sc.close();
  }
}
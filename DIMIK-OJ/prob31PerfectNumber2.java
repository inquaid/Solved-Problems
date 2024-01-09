import java.math.BigInteger;
import java.util.*;

public class prob31PerfectNumber2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        BigInteger n;
        while (T-- > 0) {
            n = new BigInteger(sc.next());

            if (n.compareTo(BigInteger.valueOf(6)) >= 0) {
                System.out.println(6);
            }
            if (n.compareTo(BigInteger.valueOf(28)) >= 0) {
                System.out.println(28);
            }
            if (n.compareTo(BigInteger.valueOf(496)) >= 0) {
                System.out.println(496);
            }
            if (n.compareTo(BigInteger.valueOf(8128)) >= 0) {
                System.out.println(8128);
            }
            if (n.compareTo(new BigInteger("33550336")) >= 0) {
                System.out.println("33550336");
            }
            if (n.compareTo(new BigInteger("8589869056")) >= 0) {
                System.out.println("8589869056");
            }
            if (n.compareTo(new BigInteger("137438691328")) >= 0) {
                System.out.println("137438691328");
            }
            if (n.compareTo(new BigInteger("2305843008139952128")) >= 0) {
                System.out.println("2305843008139952128");
            }
            System.out.println();
        }

        sc.close();
    }

}

import java.util.Scanner;

public class prob12fact100 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
      n = sc.nextInt();
      int cnt = 0;
      for (int i = 1; i <= n; i++) {
        if (i % 5 == 0)
          cnt++;
        if (i % 25 == 0)
          cnt++;
      }
      System.out.println(cnt);
    }

    sc.close();
  }
}
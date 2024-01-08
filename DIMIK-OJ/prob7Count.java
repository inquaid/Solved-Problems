import java.util.Scanner;

public class prob7Count {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    sc.nextLine();
    for (int j = 0; j < t; j++) {
      String s = sc.nextLine().trim();
      int size = s.length(), cnt = 1;
      // System.out.println(size);

      for (int i = 0; i < size; i++) {
        if (s.charAt(i) == ' ') {
          cnt++;
          while (i + 1 < size && s.charAt(i + 1) == ' ') {
            i++;
          }
        }
      }
      System.out.println(cnt);

    }
    sc.close();
  }
}
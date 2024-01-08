import java.util.Scanner;
import java.util.Arrays;

public class prob8sort {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    int[] ary = new int[3];
    for (int j = 1; j <= t; j++) {
      System.out.print("Case " + j + ":");
      for (int i = 0; i < 3; i++) {
        ary[i] = sc.nextInt();
      }
      Arrays.sort(ary);
      for (int i = 0; i < 3; i++) {
        System.out.print(" ");
        System.out.print(ary[i]);
      }
      System.out.println();
    }
    sc.close();
  }
}
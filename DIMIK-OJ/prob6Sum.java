import java.util.Scanner;

public class prob6Sum {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt(), temp;
    for (int i = 0; i < n; i++) {
      temp = sc.nextInt();
      System.out.println("Sum = " + (temp % 10 + temp / 10000));
    }
    sc.close();
  }
}
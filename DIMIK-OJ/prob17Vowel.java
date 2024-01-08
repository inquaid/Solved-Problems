import java.util.*;

public class prob17Vowel {
  public static int count(String s) {
    int size = s.length(), cnt = 0;
    char[] ary = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    int sz = ary.length;
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < sz; j++) {
        if (s.charAt(i) == ary[j]) {
          cnt++;
          break;
        }
      }
    }
    return cnt;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s;
    int T = sc.nextInt();
    sc.nextLine();
    while (T-- > 0) {
      s = sc.nextLine();
      System.out.println("Number of vowels = " + count(s));
    }

    sc.close();
  }

}
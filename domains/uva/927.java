import java.io.*;
import java.util.Scanner;
public class Main {
  public static void main(String[] args) throws IOException{
    Scanner sc = new Scanner(System.in);
    StringBuilder out = new StringBuilder();
    int t = sc.nextInt();
    long an, n, d, k;
    long [] c = new long[100];
    for (int i = 0; i < t; i++){
      n = sc.nextLong();
      for (int j = 0; j <= n; j++)
        c[j] = sc.nextInt();
      d = sc.nextLong();
      k = sc.nextLong();
      long dd = 0;

      for (int j = 1; ; j++){
        dd += d * j;
        an = 0;
        for (int l = 0; l <= n; l++)
          an += c[l] * Math.pow(j,l);

        if (dd >= k){
          out.append(an + "\n");
          break;
        }
      }
    }
    System.out.print(out);
  }
}

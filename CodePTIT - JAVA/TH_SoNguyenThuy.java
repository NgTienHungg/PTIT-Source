/* Author: NgTienHungg */

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class TH_SoNguyenThuy {

    public static String format(String s) {
        StringBuilder sb = new StringBuilder(s);
        String res = s + sb.reverse().toString();
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            Queue<String> q = new LinkedList<>();
            q.add("");
            while (n > 0) {
                String s = q.poll();

                String x = s + "4";
                System.out.print(format(x) + " ");
                q.add(x);
                n--;

                if (n > 0) {
                    String y = s + "5";
                    System.out.print(format(y) + " ");
                    q.add(y);
                    n--;
                }
            }
            System.out.println("");
        }
    }
}

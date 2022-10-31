/* Author: NgTienHungg */

import java.util.Scanner;

public class TH_XauNhiPhanDoiXung {

    public static boolean isValid(String s) {
        String rs = new StringBuilder(s).reverse().toString();
        return s.compareTo(rs) == 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String SS = sc.next();

        int T = sc.nextInt();
        while (T-- > 0) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            String s = SS.substring(l - 1, r);
            System.out.println(isValid(s) ? "YES" : "NO");
        }
    }
}

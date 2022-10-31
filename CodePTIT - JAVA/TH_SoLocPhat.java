/* Author: NgTienHungg */

import java.util.Scanner;

public class TH_SoLocPhat {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            String s = sc.next();
            System.out.println(s.length() >= 2 && s.substring(s.length() - 2).equals("86") ? "YES" : "NO");
        }
    }
}

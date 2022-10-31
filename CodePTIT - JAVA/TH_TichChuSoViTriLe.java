/* Author: NgTienHungg */

import java.util.Scanner;

public class TH_TichChuSoViTriLe {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            String s = sc.next();
            long res = 1;
            for (int i = 0; i < s.length(); i += 2) {
                if (s.charAt(i) != '0') {
                    res *= (s.charAt(i) - '0');
                }
            }
            System.out.println(res);
        }
    }
}

//2
//123410
//123456789123456789

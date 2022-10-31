/* Author: NgTienHungg */

import java.util.Scanner;

public class TH_TinhTongPhanThuc2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            double res = 0;
            int begin = n % 2 == 0 ? 2 : 1;
            int sign = 1;
            for (int i = begin; i <= n; i += 2) {
                res += sign * 1f / i;
                sign = -sign;
            }
            System.out.printf("%.5f\n", res);
        }
    }
}

//2
//2
//3

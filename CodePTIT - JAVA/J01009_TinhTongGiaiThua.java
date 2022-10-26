/* Author: NgTienHungg */

import java.util.Scanner;

public class J01009_TinhTongGiaiThua {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase() {
        long n = ip.nextLong();
        long tmp = 1, res = 0;
        for (int i = 1; i <= n; i++) {
            tmp *= i;
            res += tmp;
        }
        System.out.println(res);
    }

    public static void main(String[] args) {
        int T = 1;
        while (T-- > 0) {
            testCase();
        }
    }
}

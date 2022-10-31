/* Author: NgTienHungg */

import java.util.Scanner;

public class J02008_BoiSoNhoNhatCuaNSoNguyenDuongDauTien {

    public static Scanner ip = new Scanner(System.in);

    public static long gcd(long a, long b) {
        while (b != 0) {
            long x = a % b;
            a = b;
            b = x;
        }
        return a;
    }

    public static long lcm(long a, long b) {
        return a * b / gcd(a, b);
    }

    public static void testCase() {
        int n = ip.nextInt();
        long res = 1;
        for (int i = 2; i <= n; i++) {
            res = lcm(res, i);
        }
        System.out.println(res);
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

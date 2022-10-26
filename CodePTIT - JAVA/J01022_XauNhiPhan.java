/* Author: NgTienHungg */

import java.util.Scanner;

public class J01022_XauNhiPhan {

    public static Scanner ip = new Scanner(System.in);
    public static long[] f = new long[100];

    public static void fibo() {
        f[1] = f[2] = 1L;
        for (int i = 3; i < 100; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
    }

    public static char devide(int n, long k) {
        if (n == 1) {
            return '0';
        }
        if (n == 2) {
            return '1';
        }
        if (k <= f[n - 2]) {
            return devide(n - 2, k);
        }
        return devide(n - 1, k - f[n - 2]);
    }

    public static void testCase() {
        int n = ip.nextInt();
        long k = ip.nextLong();
        System.out.println(devide(n, k));
    }

    public static void main(String[] args) {
        fibo();
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

/* Author: NgTienHungg */

import java.util.Scanner;

public class J01006_TinhSoFibonacci {

    public static Scanner ip = new Scanner(System.in);
    public static long[] fibo = new long[100];

    public static void prepare() {
        fibo[1] = fibo[2] = 1L;
        for (int i = 3; i <= 92; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }

    public static void testCase() {
        int n = ip.nextInt();
        System.out.println(fibo[n]);
    }

    public static void main(String[] args) {
        prepare();
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

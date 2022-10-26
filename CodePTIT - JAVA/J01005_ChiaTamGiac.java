/* Author: NgTienHungg */

import java.util.Scanner;

public class J01005_ChiaTamGiac {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase() {
        int n = ip.nextInt();
        int h = ip.nextInt();
        for (double i = 1d; i < n; i++) {
            System.out.printf("%.6f ", Math.sqrt(i / n) * h);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

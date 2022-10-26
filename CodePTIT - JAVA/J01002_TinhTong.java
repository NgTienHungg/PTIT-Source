/* Author: NgTienHungg */

import java.util.Scanner;

public class J01002_TinhTong {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase() {
        long n = ip.nextLong();
        long S = n * (n + 1) / 2;
        System.out.println(S);
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

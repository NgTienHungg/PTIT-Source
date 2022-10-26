/* Author: NgTienHungg */

import java.util.Scanner;

public class J01012_UocSoChiaHetCho2 {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase() {
        int n = ip.nextInt();
        int cnt = 0;
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    cnt++;
                }
                if ((n / i) % 2 == 0 && i != Math.sqrt(n)) {
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

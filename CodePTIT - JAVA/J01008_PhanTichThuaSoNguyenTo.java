/* Author: NgTienHungg */

import java.util.Scanner;

public class J01008_PhanTichThuaSoNguyenTo {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase(int t) {
        int N = ip.nextInt();
        int n = N;
        System.out.printf("Test %d: ", t);
        for (int i = 2; i <= Math.sqrt(N); i++) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt != 0) {
                System.out.printf("%d(%d) ", i, cnt);
            }
        }
        if (n != 1) {
            System.out.printf("%d(%d) ", n, 1);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        for (int i = 1; i <= T; i++) {
            testCase(i);
        }
    }
}

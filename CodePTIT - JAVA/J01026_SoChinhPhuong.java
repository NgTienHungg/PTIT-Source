/* Author: NgTienHungg */

import java.util.Scanner;

public class J01026_SoChinhPhuong {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase() {
        int N = ip.nextInt();
        int n = (int) Math.sqrt(N);
        if (N == n * n) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

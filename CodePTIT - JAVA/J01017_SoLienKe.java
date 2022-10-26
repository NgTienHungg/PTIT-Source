/* Author: NgTienHungg */

import java.util.Scanner;

public class J01017_SoLienKe {

    public static Scanner ip = new Scanner(System.in);

    public static boolean isOk(char a, char b) {
        int x = a - '0';
        int y = b - '0';
        return Math.abs(x - y) == 1;
    }

    public static void testCase() {
        String s = ip.next();
        for (int i = 1; i < s.length(); i++) {
            if (!isOk(s.charAt(i), s.charAt(i - 1))) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

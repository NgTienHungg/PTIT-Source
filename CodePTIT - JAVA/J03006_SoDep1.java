/* Author: NgTienHungg */

import java.util.Scanner;

public class J03006_SoDep1 {

    public static Scanner ip = new Scanner(System.in);

    public static boolean isValid(String s) {
        int l = s.length();
        for (int i = 0; i <= l / 2; i++) {
            if (s.charAt(i) != s.charAt(l - i - 1) || (s.charAt(i) - '0') % 2 == 1) {
                return false;
            }
        }
        return true;
    }

    public static void testCase() {
        String s = ip.next();
        if (isValid(s)) {
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

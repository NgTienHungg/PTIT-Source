/* Author: NgTienHungg */
package codeptit;

import java.util.Scanner;

public class J03007_SoDep2 {

    public static Scanner ip = new Scanner(System.in);

    public static boolean isValid(String s) {
        int l = s.length();
        if (s.charAt(0) != '8' || s.charAt(l - 1) != '8') {
            return false;
        }
        for (int i = 0; i <= l / 2; i++) {
            if (s.charAt(i) != s.charAt(l - i - 1)) {
                return false;
            }
        }
        int sum = 0;
        for (int i = 0; i < l; i++) {
            sum += s.charAt(i) - '0';
        }
        return sum % 10 == 0;
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

/* Author: NgTienHungg */
package codeptit;

import java.util.Scanner;

public class J03008_SoDep3 {

    public static Scanner ip = new Scanner(System.in);

    public static boolean isValid(String s) {
        int l = s.length();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (s.charAt(i) != s.charAt(l - i - 1) || (c != '2' && c != '3' && c != '5' && c != '7')) {
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

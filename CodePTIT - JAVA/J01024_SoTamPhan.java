/* Author: NgTienHungg */

import java.util.Scanner;

public class J01024_SoTamPhan {

    public static Scanner ip = new Scanner(System.in);

    public static boolean isValid(char c) {
        return c >= '0' && c <= '2';
    }

    public static void testCase() {
        String s = ip.next();
        for (int i = 0; i < s.length(); i++) {
            if (!isValid(s.charAt(i))) {
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

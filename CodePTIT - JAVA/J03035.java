/* Author: NgTienHungg */

import java.util.Scanner;

public class J03035 {

    public static String a, b;
    public static int count;

    public static void Try(int index) {
        if (index == a.length()) {
            long x = Long.parseLong(a);
            long y = Long.parseLong(b);
            if (x > y) {
                count++;
            }
            return;
        }

        if (a.charAt(index) == '?') {
            for (int i = '0'; i <= '9'; i++) {
                a = changeChar(a, index, (char) i);
                Try(index + 1);
            }
            a = changeChar(a, index, '?');
        } else {
            Try(index + 1);
        }
    }

    public static String changeChar(String src, int index, char expect) {
        return src.substring(0, index) + expect + src.substring(index + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();

        while (T-- > 0) {
            a = sc.nextLine();
            b = sc.nextLine();

            count = 0;
            Try(0);
            System.out.println(count);
        }
    }
}

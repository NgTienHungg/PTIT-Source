/* Author: NgTienHungg */

import java.util.Scanner;

public class J03007_SoDep2 {

    public static boolean isValid(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s.charAt(i) - '0';
        }
        return sum % 10 == 0;
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int T = ip.nextInt();
        while (T-- > 0) {
            StringBuilder s = new StringBuilder(ip.next());
            System.out.println(s.toString().matches("^8.*8$") && s.equals(s.reverse()) && isValid(s.toString()) ? "YES" : "NO");
        }
    }
}

/* Author: NgTienHungg */
package codeptit;

import java.math.BigInteger;
import java.util.Scanner;

public class J03013_HieuSoNguyenLon1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            String a = sc.next();
            String b = sc.next();
            BigInteger A = new BigInteger(a);
            BigInteger B = new BigInteger(b);
            BigInteger C = A.subtract(B).abs();

            StringBuilder sb = new StringBuilder(C.toString());
            int maxLen = Math.max(a.length(), b.length());
            while (sb.length() < maxLen) {
                sb.insert(0, '0');
            }
            System.out.println(sb.toString());
        }
    }
}

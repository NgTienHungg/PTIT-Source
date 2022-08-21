/* Author: NgTienHungg */
package codeptit;

import java.math.BigInteger;
import java.util.Scanner;

public class J03015_HieuSoNguyenLon2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        BigInteger A = new BigInteger(a);
        BigInteger B = new BigInteger(b);
        BigInteger C = A.subtract(B);
        System.out.println(C.toString());
    }
}

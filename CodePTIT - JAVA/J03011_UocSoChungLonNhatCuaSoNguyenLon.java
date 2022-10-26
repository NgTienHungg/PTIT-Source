/* Author: NgTienHungg */

import java.math.BigInteger;
import java.util.Scanner;

public class J03011_UocSoChungLonNhatCuaSoNguyenLon {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            BigInteger a = new BigInteger(sc.next());
            BigInteger b = new BigInteger(sc.next());
            System.out.println(a.gcd(b));
        }
    }
}

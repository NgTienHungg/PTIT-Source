/* Author: NgTienHungg */

import java.math.BigInteger;
import java.util.Scanner;

public class J03016_ChiaHetCho11 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger bi = sc.nextBigInteger();
            System.out.println(bi.mod(new BigInteger("11")).toString().equals("0") ? "1" : "");
        }
    }
}

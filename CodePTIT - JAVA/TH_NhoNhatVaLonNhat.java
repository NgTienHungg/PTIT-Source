/* Author: NgTienHungg */

import java.math.BigInteger;
import java.util.Scanner;

public class TH_NhoNhatVaLonNhat {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int n = sc.nextInt();
            if (n == 0) {
                break;
            }
            BigInteger max = null, min = null;
            for (int i = 0; i < n; i++) {
                BigInteger x = sc.nextBigInteger();
                if (i == 0) {
                    max = x;
                    min = x;
                    continue;
                }
                if (x.compareTo(max) > 0) {
                    max = x;
                }
                if (x.compareTo(min) < 0) {
                    min = x;
                }
            }
            if (max.compareTo(min) == 0) {
                System.out.println("BANG NHAU");
            } else {
                System.out.println(min + " " + max);
            }
        }
    }
}

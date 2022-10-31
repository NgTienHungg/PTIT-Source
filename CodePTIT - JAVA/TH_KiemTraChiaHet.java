/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class TH_KiemTraChiaHet {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SONGUYEN.IN"));
        int t = Integer.parseInt(sc.nextLine());
        BigInteger m7 = new BigInteger("7");
        BigInteger m13 = new BigInteger("13");

        while (t-- > 0) {
            BigInteger x = new BigInteger(sc.next());
            if (x.mod(m7).toString().equals("0") && x.mod(m13).toString().equals("0")) {
                System.out.println("Both");
            } else if (x.mod(m7).toString().equals("0")) {
                System.out.println("Div 7");
            } else if (x.mod(m13).toString().equals("0")) {
                System.out.println("Div 13");
            } else {
                System.out.println("None");
            }
        }
    }
}

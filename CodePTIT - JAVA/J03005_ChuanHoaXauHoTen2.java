/* Author: NgTienHungg */

import java.util.Scanner;

public class J03005_ChuanHoaXauHoTen2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            String[] ar = sc.nextLine().trim().split("\\s+");
            for (int i = 1; i < ar.length; i++) {
                System.out.print(ar[i].substring(0, 1).toUpperCase() + ar[i].substring(1).toLowerCase());
                if (i != ar.length - 1) {
                    System.out.print(" ");
                }
            }
            System.out.print(", " + ar[0].toUpperCase() + "\n");
        }
    }
}

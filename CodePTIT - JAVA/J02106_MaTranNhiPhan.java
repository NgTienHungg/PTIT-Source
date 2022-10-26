/* Author: NgTienHungg */

import java.util.Scanner;

public class J02106_MaTranNhiPhan {

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int res = 0;
        byte[][] a = new byte[n][3];
        for (int i = 0; i < n; i++) {
            byte dem = 0;
            for (int j = 0; j < 3; j++) {
                a[i][j] = ip.nextByte();
                dem += a[i][j];
            }
            if (dem >= 2) {
                res++;
            }
        }
        System.out.println(res);
    }
}

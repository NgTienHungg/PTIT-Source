/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Scanner;

public class J02105_DanhSachKe {

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        ArrayList<Integer>[] g = new ArrayList[n + 1];
        for (int i = 0; i <= n; i++) {
            g[i] = new ArrayList<>();
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                byte x = ip.nextByte();
                if (x == 1) {
                    g[i].add(j);
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            System.out.printf("List(%d) = ", i);
            for (int j : g[i]) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}

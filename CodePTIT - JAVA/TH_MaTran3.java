/* Author: NgTienHungg */

import java.util.Scanner;

public class TH_MaTran3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][n];
        int top = 0, down = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
                if (j > i) {
                    top += a[i][j];
                } else if (j < i) {
                    down += a[i][j];
                }
            }
        }
        int K = sc.nextInt();
        double delta = Math.sqrt(Math.abs(top - down));
        System.out.println(delta <= K ? "YES" : "NO");
        System.out.printf("%.5f", delta);
    }
}

//5
//2 8 10 6 7
//6 3 2 6 9
//10 2 6 2 8
//9 9 7 9 8
//9 6 5 6 9
//3

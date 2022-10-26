/* Author: NgTienHungg */

import java.util.Scanner;

public class J02103_TichMaTranVoiChuyenViCuaNo {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase(int t) {
        int n = ip.nextInt();
        int m = ip.nextInt();
        int[][] a = new int[n][m];
        int[][] b = new int[m][n];
        int[][] c = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = ip.nextInt();
                b[j][i] = a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                c[i][j] = 0;
                for (int k = 0; k < m; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        System.out.printf("Test %d:\n", t);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(c[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        for (int i = 1; i <= T; i++) {
            testCase(i);
        }
    }
}

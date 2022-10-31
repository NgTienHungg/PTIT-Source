/* Author: NgTienHungg */

import java.util.Scanner;

public class J04017_TichMaTranVaChuyenViCuaNo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), m = sc.nextInt();
            Matrix a = new Matrix(n, m);
            a.nextMatrix(sc);
            Matrix b = a.trans();
            System.out.println(a.mul(b));
        }
    }
}

class Matrix {

    private int[][] a;

    public Matrix(int r, int c) {
        a = new int[r][c];
    }

    public Matrix(int[][] a) {
        this.a = a;
    }

    public int[][] getA() {
        return a;
    }

    public void setA(int[][] a) {
        this.a = a;
    }

    public int getRow() {
        return a.length;
    }

    public int getColumn() {
        return a[0].length;
    }

    public void nextMatrix(Scanner sc) {
        for (int i = 0; i < getRow(); i++) {
            for (int j = 0; j < getColumn(); j++) {
                a[i][j] = sc.nextInt();
            }
        }
    }

    public Matrix trans() {
        int[][] tran = new int[getColumn()][getRow()];
        for (int i = 0; i < tran.length; i++) {
            for (int j = 0; j < tran[0].length; j++) {
                tran[i][j] = a[j][i];
            }
        }
        return new Matrix(tran);
    }

    public Matrix mul(Matrix b) {
        int[][] ans = new int[getRow()][b.getColumn()];
        for (int i = 0; i < ans.length; i++) {
            for (int j = 0; j < ans[0].length; j++) {
                ans[i][j] = 0;
            }
        }
        for (int i = 0; i < ans.length; i++) {
            for (int j = 0; j < ans[0].length; j++) {
                for (int k = 0; k < getColumn(); k++) {
                    ans[i][j] += a[i][k] * b.getA()[k][j];
                }
            }
        }
        return new Matrix(ans);
    }

    @Override
    public String toString() {
        String res = "";
        for (int i = 0; i < getRow(); i++) {
            for (int j = 0; j < getColumn(); j++) {
                res += a[i][j] + " ";
            }
            res += "\n";
        }
        return res;
    }
}

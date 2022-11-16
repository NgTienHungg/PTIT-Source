/* Author: NgTienHungg */

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Pair {

    int first, second;

    public Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }
}

public class TH_SoBuocDiChuyenItNhat {

    public static Scanner sc = new Scanner(System.in);
    public static int[][] a = new int[1005][1005];
    public static int[][] res = new int[1005][1005];
    public static int oo = (int) 1e9;

    public static void solve() {
        int n = sc.nextInt();
        int m = sc.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = sc.nextInt();
                res[i][j] = oo;
            }
        }

        Queue<Pair> q = new LinkedList<>();
        q.add(new Pair(0, 0));
        res[0][0] = 0;
        while (!q.isEmpty()) {
            Pair p = q.poll();
            int r = p.first;
            int c = p.second;
            if (r == n - 1 && c == m - 1) {
                System.out.println(res[r][c]);
                return;
            }
            int i, j;
            if (r + 1 < n) {
                i = r + Math.abs(a[r][c] - a[r + 1][c]);
                j = c;
                if (i < n && res[i][j] == oo) {
                    res[i][j] = res[r][c] + 1;
                    q.add(new Pair(i, j));
                }
            }
            if (c + 1 < m) {
                i = r;
                j = c + Math.abs(a[r][c] - a[r][c + 1]);
                if (j < m && res[i][j] == oo) {
                    res[i][j] = res[r][c] + 1;
                    q.add(new Pair(i, j));
                }
            }
            if (r + 1 < n && c + 1 < m) {
                i = r + Math.abs(a[r][c] - a[r + 1][c + 1]);
                j = c + Math.abs(a[r][c] - a[r + 1][c + 1]);
                if (i < n && j < m && res[i][j] == oo) {
                    res[i][j] = res[r][c] + 1;
                    q.add(new Pair(i, j));
                }
            }
        }
        System.out.println(-1);
    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}

//1
//3 3
//2 1 2
//1 2 4
//1 3 2

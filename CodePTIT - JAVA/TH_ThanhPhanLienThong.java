/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class TH_ThanhPhanLienThong {

    public static int n, m, x, u, v;
    public static ArrayList<Integer>[] g;
    public static int[] vs;

    public static void bfs(int s) {
        Queue<Integer> q = new LinkedList<>();
        q.add(s);
        vs[s] = 1;

        while (!q.isEmpty()) {
            u = q.poll();
            for (Integer v : g[u]) {
                if (vs[v] == 0) {
                    vs[v] = 1;
                    q.add(v);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        x = sc.nextInt();

        g = new ArrayList[n + 1];
        for (int i = 1; i <= n; i++) {
            g[i] = new ArrayList<>();
        }

        vs = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            vs[i] = 0;
        }

        for (int i = 0; i < m; i++) {
            u = sc.nextInt();
            v = sc.nextInt();
            g[u].add(v);
            g[v].add(u);
        }

        bfs(x);

        boolean connect = true;
        for (int i = 1; i <= n; i++) {
            if (i != x && vs[i] == 0) {
                connect = false;
                System.out.println(i);
            }
        }
        if (connect) {
            System.out.println(0);
        }
    }
}

//6 5 2
//1 2
//3 2
//4 2
//5 2
//6 2

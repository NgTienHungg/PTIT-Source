/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class BinaryBacktrack {

    private int n;
    private int[] a;
    private int[] bin;
    private List<String> res;

    public BinaryBacktrack(int n, int[] a) {
        this.n = n;
        this.a = a;
        bin = new int[n];
        res = new ArrayList<>();
    }

    private void check() {
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (bin[i] == 1) {
                list.add(a[i]);
            }
        }
        if (list.size() >= 2) {
            boolean isAscending = true;
            for (int i = 1; i < list.size(); i++) {
                if (list.get(i) <= list.get(i - 1)) {
                    isAscending = false;
                    break;
                }
            }
            if (isAscending) {
                String s = "";
                for (Integer i : list) {
                    s += i + " ";
                }
                res.add(s);
            }
        }
    }

    private void Try(int i) {
        for (int j = 0; j <= 1; j++) {
            bin[i] = j;
            if (i == n - 1) {
                check();
            } else {
                Try(i + 1);
            }
        }
    }

    public void solve() {
        Try(0);
        Collections.sort(res);
        for (String i : res) {
            System.out.println(i);
        }
    }
}

public class J07008_DayConTangDan {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        BinaryBacktrack bb = new BinaryBacktrack(n, a);
        bb.solve();
    }
}

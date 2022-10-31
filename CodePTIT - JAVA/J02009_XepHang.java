/* Author: NgTienHungg */

import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;

class Pair {

    public int t;
    public int d;

    void input(Scanner sc) {
        t = sc.nextInt();
        d = sc.nextInt();
    }
}

public class J02009_XepHang {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Vector<Pair> v = new Vector<>();
        for (int i = 0; i < n; i++) {
            Pair x = new Pair();
            x.input(sc);
            v.add(x);
        }
        Collections.sort(v, new Comparator<Pair>() {
            @Override
            public int compare(Pair a, Pair b) {
                if (a.t > b.t) {
                    return 1;
                } else {
                    return -1;
                }
            }
        });
        int s = 0;
        for (int i = 0; i < n; i++) {
            if (s < v.get(i).t) {
                s = v.get(i).t;
            }
            s += v.get(i).d;
        }
        System.out.println(s);
        sc.close();
    }
}

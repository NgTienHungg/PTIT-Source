/* Author: NgTienHungg */

import java.util.Scanner;

class Pair<T, S> {

    public T t;
    public S s;

    public Pair() {

    }

    public Pair(T t, S s) {
        this.t = t;
        this.s = s;
    }

    @Override
    public String toString() {
        return "(" + t + "," + s + ")";
    }
}

public class TH_DanhSachCanhSuDungLopPair {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Pair<Integer, Integer> p;
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = sc.nextInt();
                if (x == 1 && i < j) {
                    p = new Pair(i + 1, j + 1);
                    System.out.println(p);
                }
            }
        }
    }
}

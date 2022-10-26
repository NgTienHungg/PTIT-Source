/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class Time implements Comparable<Time> {

    private int h, m, s;

    public Time() {

    }

    public Time(int h, int m, int s) {
        this.h = h;
        this.m = m;
        this.s = s;
    }

    public int getH() {
        return h;
    }

    public int getM() {
        return m;
    }

    public int getS() {
        return s;
    }

    @Override
    public String toString() {
        return h + " " + m + " " + s;
    }

    @Override
    public int compareTo(Time o) {
        int s1 = h * 3600 + m * 60 + s;
        int s2 = o.getH() * 3600 + o.getM() * 60 + o.getS();
        return s1 - s2;
    }
}

public class J05033_SapXepThoiGian {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Time> list = new ArrayList<>(n);
        for (int i = 0; i < n; i++) {
            int h = sc.nextInt();
            int m = sc.nextInt();
            int s = sc.nextInt();
            Time time = new Time(h, m, s);
            list.add(time);
        }
        Collections.sort(list);
        for (Time i : list) {
            System.out.println(i);
        }
    }
}

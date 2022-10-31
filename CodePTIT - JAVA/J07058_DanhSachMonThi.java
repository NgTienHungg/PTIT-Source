/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Subject implements Comparable<Subject> {

    private String maMon, tenMon, hinhThucThi;

    public Subject(String maMon, String tenMOn, String hinhThucThi) {
        this.maMon = maMon;
        this.tenMon = tenMOn;
        this.hinhThucThi = hinhThucThi;
    }

    public String getMaMon() {
        return maMon;
    }

    @Override
    public String toString() {
        return maMon + " " + tenMon + " " + hinhThucThi;
    }

    @Override
    public int compareTo(Subject other) {
        return this.maMon.compareTo(other.getMaMon());
    }
}

public class J07058_DanhSachMonThi {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<Subject> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String maMon = sc.nextLine();
            String tenMon = sc.nextLine();
            String hinhThucThi = sc.nextLine();
            list.add(new Subject(maMon, tenMon, hinhThucThi));
        }

        Collections.sort(list);
        for (Subject e : list) {
            System.out.println(e);
        }
    }
}

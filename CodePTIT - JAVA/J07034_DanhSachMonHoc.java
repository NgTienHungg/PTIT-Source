/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class Subject implements Comparable<Subject> {

    private String id, name;
    private int stc;

    public Subject(String id, String name, int stc) {
        this.id = id;
        this.name = name;
        this.stc = stc;
    }

    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + stc;
    }

    @Override
    public int compareTo(Subject o) {
        return name.compareTo(o.getName());
    }
}

public class J07034_DanhSachMonHoc {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int n = Integer.parseInt(sc.nextLine());
        Subject[] subjects = new Subject[n];
        for (int i = 0; i < n; i++) {
            String id = sc.nextLine();
            String name = sc.nextLine();
            int stc = Integer.parseInt(sc.nextLine());
            subjects[i] = new Subject(id, name, stc);
        }
        Arrays.sort(subjects);
        for (Subject i : subjects) {
            System.out.println(i);
        }
    }
}

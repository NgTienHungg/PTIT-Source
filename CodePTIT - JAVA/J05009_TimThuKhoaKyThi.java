/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Student implements Comparable<Student> {

    public static int NUM = 1;
    public int id;
    public String name, dob;
    public Float p1, p2, p3, total;

    public Student(String name, String dob, float p1, float p2, float p3) {
        this.id = NUM++;
        this.name = name;
        this.dob = dob;
        this.p1 = p1;
        this.p2 = p2;
        this.p3 = p3;
        this.total = p1 + p2 + p3;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + dob + " " + total;
    }

    @Override
    public int compareTo(Student o) {
        if (this.total.compareTo(o.total) == 0) {
            return (this.id - o.id);
        }
        return -this.total.compareTo(o.total);
    }
}

public class J05009_TimThuKhoaKyThi {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<Student> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String dob = sc.nextLine();
            float p1 = Float.parseFloat(sc.nextLine());
            float p2 = Float.parseFloat(sc.nextLine());
            float p3 = Float.parseFloat(sc.nextLine());
            list.add(new Student(name, dob, p1, p2, p3));
        }

        Collections.sort(list);
        float highest = list.get(0).total;
        for (Student e : list) {
            if (e.total == highest) {
                System.out.println(e);
            } else {
                break;
            }
        }
    }
}

// nộp Ac nhưng k chạy đc :> test thử trên IDEone

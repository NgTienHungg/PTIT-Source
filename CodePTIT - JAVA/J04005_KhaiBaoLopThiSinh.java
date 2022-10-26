/* Author: NgTienHungg */

import java.util.Scanner;

class Student {

    private String name;
    private String dob;
    private float p1, p2, p3;

    public Student() {
        name = "";
        dob = "";
        p1 = p2 = p3 = 0;
    }

    public Student(String name, String dob, float p1, float p2, float p3) {
        this.name = name;
        this.dob = dob;
        this.p1 = p1;
        this.p2 = p2;
        this.p3 = p3;
    }

    @Override
    public String toString() {
        return name + " " + dob + " " + String.format("%.1f", p1 + p2 + p3);
    }
}

public class J04005_KhaiBaoLopThiSinh {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String dob = sc.nextLine();
        float p1 = sc.nextFloat();
        float p2 = sc.nextFloat();
        float p3 = sc.nextFloat();
        Student stu = new Student(name, dob, p1, p2, p3);
        System.out.println(stu);
    }
}

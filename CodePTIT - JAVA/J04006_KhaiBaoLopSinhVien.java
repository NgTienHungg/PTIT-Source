/* Author: NgTienHungg */

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

class Student {

    private String msv = "B20DCCN001";
    private String name;
    private String lop;
    private String dob;
    private float gpa;

    public Student() {
        this("", "", "", 0f);
    }

    public Student(String name, String lop, String dob, float gpa) {
        this.name = name;
        this.lop = lop;
        this.dob = dob;
        this.gpa = gpa;
    }

    public String formatDob() {
        try {
            SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
            Date date = formatter.parse(dob);
            return formatter.format(date);
        } catch (ParseException e) {
            System.out.println(e);
        }
        return "";
    }

    @Override
    public String toString() {
        return msv + " " + name + " " + lop + " " + formatDob() + " " + String.format("%.2f", gpa);
    }
}

public class J04006_KhaiBaoLopSinhVien {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String lop = sc.nextLine();
        String dob = sc.nextLine();
        float gpa = sc.nextFloat();
        Student stu = new Student(name, lop, dob, gpa);
        System.out.println(stu);
    }
}

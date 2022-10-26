/* Author: NgTienHungg */

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

class Student {

    public static int NUM = 1;
    public String id, name, classs, dateOfBirth;
    public float gpa;

    public Student(String name, String classs, String dateOfBirth, float gpa) {
        this.id = String.format("B20DCCN%03d", NUM++);
        this.name = name;
        this.classs = classs;
        this.dateOfBirth = dateOfBirth;
        this.gpa = gpa;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + classs + " " + dateOfBirth + " " + String.format("%.2f", gpa);
    }
}

public class J05003_DanhSachDoiTuongSinhVien1 {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String classs = sc.nextLine();
            String dateOfBirth = sdf.format(sdf.parse(sc.nextLine()));
            float gpa = Float.parseFloat(sc.nextLine());
            Student student = new Student(name, classs, dateOfBirth, gpa);
            System.out.println(student);
        }
    }
}

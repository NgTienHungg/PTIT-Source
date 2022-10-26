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
        this.name = formatName(name);
        this.classs = classs;
        this.dateOfBirth = dateOfBirth;
        this.gpa = gpa;
    }

    private String formatName(String name) {
        String[] words = name.trim().split("\\s+");
        String res = "";
        for (String word : words) {
            res += word.substring(0, 1).toUpperCase() + word.substring(1).toLowerCase() + " ";
        }
        return res.substring(0, res.length() - 1);
    }

    @Override
    public String toString() {
        return id + " " + name + " " + classs + " " + dateOfBirth + " " + String.format("%.2f", gpa);
    }
}

public class J05004_DanhSachDoiTuongSinhVien2 {

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

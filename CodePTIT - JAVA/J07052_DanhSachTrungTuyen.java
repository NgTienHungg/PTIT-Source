/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.text.DecimalFormat;
import java.util.*;

public class J07052_DanhSachTrungTuyen {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("THISINH.in"));
        int t = Integer.parseInt(scanner.nextLine());
        List<Student> students = new ArrayList<>();
        while (t-- > 0) {
            students.add(new Student(scanner.nextLine(), scanner.nextLine(),
                    Double.parseDouble(scanner.nextLine()), Double.parseDouble(scanner.nextLine()), Double.parseDouble(scanner.nextLine())));
        }
        Collections.sort(students);

        int n = Integer.parseInt(scanner.nextLine());
        double mark = students.get(n - 1).getSumMark();

        for (Student student : students) {
            if (student.getSumMark() >= mark) {
                student.setStatus("TRUNG TUYEN");
            } else {
                student.setStatus("TRUOT");
            }
        }

        System.out.println(String.format("%.1f", mark));
        for (Student student : students) {
            System.out.println(student);
        }
    }
}

class Student implements Comparable<Student> {

    private String id;
    private String name;
    private double math;
    private double physic;
    private double chemistry;
    private String status;

    public Student(String id, String name, double math, double physic, double chemistry) {
        this.id = id;
        this.name = name;
        this.math = math;
        this.physic = physic;
        this.chemistry = chemistry;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        name = name.trim().replaceAll("\\s+", " ");
        String[] tmp = name.split(" ");
        name = "";
        for (int i = 0; i < tmp.length; i++) {
            name += Character.toUpperCase(tmp[i].charAt(0)) + tmp[i].substring(1).toLowerCase() + " ";
        }
        name = name.trim();
        return name;
    }

    public double getSumMark() {
        return math * 2 + physic + chemistry + getBonus();
    }

    public double getBonus() {
        String s = id.substring(0, 3);
        if (s.equals("KV1")) {
            return 0.5;
        }
        if (s.equals("KV2")) {
            return 1.0;
        }
        if (s.equals("KV3")) {
            return 2.5;
        }
        return 0;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public static String removeZero(double number) {
        DecimalFormat format = new DecimalFormat("#.#");
        return format.format(number);
    }

    @Override
    public String toString() {
        return id + " " + getName() + " " + removeZero(getBonus()) + " " + removeZero(getSumMark()) + " " + getStatus();
    }

    @Override
    public int compareTo(Student o) {
        if (this.getSumMark() == o.getSumMark()) {
            return this.getId().compareTo(o.getId());
        }
        return this.getSumMark() < o.getSumMark() ? 1 : -1;
    }
}

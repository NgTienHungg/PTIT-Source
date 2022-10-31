/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

class Teacher {

    private int id;
    private String name;
    private String idd;
    private double point1, point2;

    public Teacher(int id, String name, String idd, double point1, double point2) {
        this.id = id;
        this.name = name;
        this.idd = idd;
        this.point1 = point1;
        this.point2 = point2;
    }

    public String getId() {
        return String.format("GV%02d", id);
    }

    public String getSubject() {
        String s = idd.substring(0, 1);
        switch (s) {
            case "A":
                return "TOAN";
            case "B":
                return "LY";
            case "C":
                return "HOA";
            default:
                return "";
        }
    }

    public double getBonus() {
        int n = Integer.parseInt(idd.substring(1, 2));
        switch (n) {
            case 1:
                return 2.0;
            case 2:
                return 1.5;
            case 3:
                return 1.0;
            default:
                return 0.0;
        }
    }

    public double getTotalPoint() {
        return point1 * 2 + point2 + getBonus();
    }

    public String getStatus() {
        if (getTotalPoint() >= 18) {
            return "TRUNG TUYEN";
        }
        return "LOAI";
    }

    @Override
    public String toString() {
        return getId() + " " + name + " " + getSubject() + " " + String.format("%.1f", getTotalPoint()) + " " + getStatus();
    }
}

public class J05014_TuyenGiaoVien {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        List<Teacher> teachers = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            scanner.nextLine();
            teachers.add(new Teacher(i + 1, scanner.nextLine(), scanner.nextLine(), scanner.nextDouble(), scanner.nextDouble()));
        }

        Collections.sort(teachers, new Comparator<Teacher>() {
            @Override
            public int compare(Teacher o1, Teacher o2) {
                if (o1.getTotalPoint() == o2.getTotalPoint()) {
                    return o1.getId().compareTo(o2.getId());
                }
                return o1.getTotalPoint() < o2.getTotalPoint() ? 1 : -1;
            }
        });

        for (Teacher teacher : teachers) {
            System.out.println(teacher);
        }
    }
}

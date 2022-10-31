/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.ArrayList;

class Student {

    private String id;
    private String name;
    private String className;
    private String email;

    public Student(String id, String name, String className, String email) {
        this.id = id;
        this.name = name;
        this.className = className;
        this.email = email;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getClassName() {
        return className;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + className + " " + email;
    }
}

public class J05022_LietKeSinhVienTheoLop {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        ArrayList<Student> arrayList = new ArrayList<>();

        int t = scanner.nextInt();
        scanner.nextLine();
        for (int i = 0; i < t; i++) {
            arrayList.add(new Student(scanner.nextLine(), scanner.nextLine(), scanner.nextLine(), scanner.nextLine()));
        }

        int Q = scanner.nextInt();
        while (Q-- > 0) {
            String className = scanner.next();
            System.out.println("DANH SACH SINH VIEN LOP " + className + ":");
            for (int i = 0; i < arrayList.size(); i++) {
                if (className.equals(arrayList.get(i).getClassName())) {
                    System.out.println(arrayList.get(i));
                }
            }
        }
    }
}

/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Student implements Comparable<Student> {

    private String id;
    private String name;
    private String phoneNumber;
    private int numberOfTeam;
    private String exercise;

    public Student(String id, String name, String phoneNumber, int numberOfTeam) {
        this.id = id;
        this.name = name;
        this.phoneNumber = phoneNumber;
        this.numberOfTeam = numberOfTeam;
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

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    public int getNumberOfTeam() {
        return numberOfTeam;
    }

    public void setNumberOfTeam(int numberOfTeam) {
        this.numberOfTeam = numberOfTeam;
    }

    public String getExercise() {
        return exercise;
    }

    public void setExercise(String exercise) {
        this.exercise = exercise;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + phoneNumber + " " + numberOfTeam + " " + getExercise();
    }

    @Override
    public int compareTo(Student o) {
        return id.compareTo(o.id);
    }
}

public class J06004_QuanLyBaiTapNhom2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n = sc.nextInt();
        sc.nextLine();
        ArrayList<Student> students = new ArrayList<>();
        ArrayList<String> tmp = new ArrayList<>();
        while (t-- > 0) {
            students.add(new Student(sc.nextLine(), sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
        while (n-- > 0) {
            tmp.add(sc.nextLine());
        }
        for (Student student : students) {
            student.setExercise(tmp.get(student.getNumberOfTeam() - 1));
        }
        Collections.sort(students);
        students.forEach(System.out::println);
    }
}

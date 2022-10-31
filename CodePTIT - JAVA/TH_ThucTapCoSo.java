/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Student {

    public String ID, name, phoneNumber, email;

    public Student(String msv, String name, String phoneNumber, String email) {
        this.ID = msv;
        this.name = name;
        this.phoneNumber = phoneNumber;
        this.email = email;
    }

    @Override
    public String toString() {
        return ID + " " + name + " " + phoneNumber + " " + email;
    }
}

class Subject {

    public static int NUM = 1;
    public String ID, lecturerName, subjectName;

    public Subject(String lecturerName, String subjectName) {
        this.ID = String.format("DT%03d", NUM++);
        this.lecturerName = lecturerName;
        this.subjectName = subjectName;
    }

    @Override
    public String toString() {
        return lecturerName + " " + subjectName;
    }
}

class Assignment implements Comparable<Assignment> {

    public String studentID, subjectID;
    public Student student;
    public Subject subject;

    public Assignment(String msv, String subjectID) {
        this.studentID = msv;
        this.subjectID = subjectID;
    }

    @Override
    public int compareTo(Assignment other) {
        return subject.subjectName.compareTo(other.subject.subjectName);
    }

    @Override
    public String toString() {
        return student.toString() + " " + subject.toString();
    }
}

public class TH_ThucTapCoSo {

    public static void main(String[] args) throws FileNotFoundException {
        ArrayList<Student> students = new ArrayList<>();
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            students.add(new Student(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        sc.close();

        ArrayList<Subject> subjects = new ArrayList<>();
        sc = new Scanner(new File("DETAI.in"));
        n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            subjects.add(new Subject(sc.nextLine(), sc.nextLine()));
        }
        sc.close();

        ArrayList<Assignment> assignments = new ArrayList<>();
        sc = new Scanner(new File("NHIEMVU.in"));
        n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            String msv = sc.next();
            String subjectID = sc.next();
            Assignment assignment = new Assignment(msv, subjectID);

            for (Student student : students) {
                if (student.ID.equals(msv)) {
                    assignment.student = student;
                }
            }
            for (Subject subject : subjects) {
                if (subject.ID.equals(subjectID)) {
                    assignment.subject = subject;
                }
            }

            assignments.add(assignment);
        }
        sc.close();

        Collections.sort(assignments);
        for (Assignment assignment : assignments) {
            System.out.println(assignment);
        }
    }
}

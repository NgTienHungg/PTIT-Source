/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Student implements Comparable<Student> {

    public String name;
    public int ac, sub;

    public Student(String name, int ac, int sub) {
        this.name = name;
        this.ac = ac;
        this.sub = sub;
    }

    @Override
    public int compareTo(Student other) {
        if (this.ac == other.ac) {
            if (this.sub == other.sub) {
                return this.name.compareTo(other.name);
            }
            return this.sub - other.sub;
        }
        return -(this.ac - other.ac);
    }

    @Override
    public String toString() {
        return name + " " + ac + " " + sub;
    }
}

public class TH_LuyenTapLapTrinh {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        ArrayList<Student> students = new ArrayList<>();
        int n = sc.nextInt();
        while (n-- > 0) {
            sc.nextLine();
            String name = sc.nextLine();
            int ac = sc.nextInt();
            int sub = sc.nextInt();
            Student student = new Student(name, ac, sub);
            students.add(student);
        }

        Collections.sort(students);
        for (Student i : students) {
            System.out.println(i);
        }
    }
}

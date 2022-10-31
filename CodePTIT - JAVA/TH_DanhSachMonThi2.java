/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

class Subject implements Comparable<Subject> {

    public String id, name, exam;

    public Subject(String id, String name, String exam) {
        this.id = id;
        this.name = name;
        this.exam = exam;
    }

    @Override
    public int compareTo(Subject o) {
        return id.compareTo(o.id);
    }

    @Override
    public String toString() {
        return id + " " + name + " " + exam;
    }
}

public class TH_DanhSachMonThi2 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        List<Subject> list = new ArrayList<>();
        Set<String> setID = new HashSet<>();

        while (sc.hasNext()) {
            Subject subject = new Subject(sc.nextLine(), sc.nextLine(), sc.nextLine());
            if (!setID.contains(subject.id)) {
                setID.add(subject.id);
                list.add(subject);
            }
        }

        Collections.sort(list);
        for (Subject e : list) {
            System.out.println(e);
        }
    }
}

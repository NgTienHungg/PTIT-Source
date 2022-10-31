
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/* Author: NgTienHungg */
class Person {

    private int id;
    private String name;
    private double pointA;
    private double pointB;

    public Person(int id, String name, double pointA, double pointB) {
        this.id = id;
        this.name = name;
        this.pointA = pointA;
        this.pointB = pointB;
    }

    public String getId() {
        return String.format("TS%02d", id);
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPointA() {
        if (pointA > 10) {
            return pointA /= 10;
        }
        return pointA;
    }

    public double getPointB() {
        if (pointB > 10) {
            return pointB /= 10;
        }
        return pointB;
    }

    public double getTotalPoint() {
        return (getPointA() + getPointB()) / 2;
    }

    public String getStatus() {
        if (getTotalPoint() < 5) {
            return "TRUOT";
        }
        if (getTotalPoint() < 8) {
            return "CAN NHAC";
        }
        if (getTotalPoint() <= 9.5) {
            return "DAT";
        }
        return "XUAT SAC";
    }

    @Override
    public String toString() {
        return getId() + " " + name + " " + String.format("%.2f", getTotalPoint()) + " " + getStatus();
    }
}

public class J05013_TuyenDung {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Person> arrayList = new ArrayList<>();

        for (int i = 0; i < t; i++) {
            sc.nextLine();
            arrayList.add(new Person(i + 1, sc.nextLine(), sc.nextDouble(), sc.nextDouble()));
        }

        Collections.sort(arrayList, new Comparator<Person>() {
            @Override
            public int compare(Person o1, Person o2) {
                return o1.getTotalPoint() < o2.getTotalPoint() ? 1 : -1;
            }
        });

        for (Person i : arrayList) {
            System.out.println(i);
        }
    }
}

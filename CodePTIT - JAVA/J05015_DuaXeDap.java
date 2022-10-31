/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Person {

    private String name;
    private String team;
    private String time;

    public Person(String name, String team, String time) {
        this.name = name;
        this.team = team;
        this.time = time;
    }

    public String getId() {
        String[] s1 = team.split(" ");
        String res = "";
        for (String i : s1) {
            res += i.charAt(0);
        }
        String[] s2 = name.split(" ");
        for (String i : s2) {
            res += i.charAt(0);
        }
        return res.toUpperCase();
    }

    public double getSpeed() {
        double h = Double.parseDouble(time.substring(0, 1)) - 6;
        double s = Double.parseDouble(time.substring(2, 4)) / 60;
        return (double) 120 / (h + s);
    }

    @Override
    public String toString() {
        return getId() + " " + name + " " + team + " " + (int) Math.round(getSpeed()) + " Km/h";
    }
}

public class J05015_DuaXeDap {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Person> arr = new ArrayList<>();
        sc.nextLine();
        while (t-- > 0) {
            arr.add(new Person(sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }

        Collections.sort(arr, new Comparator<Person>() {
            @Override
            public int compare(Person o1, Person o2) {
                return o1.getSpeed() < o2.getSpeed() ? 1 : -1;
            }
        });

        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i));

        }
    }
}

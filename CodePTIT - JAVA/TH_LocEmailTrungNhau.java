/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeSet;

public class TH_LocEmailTrungNhau {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SortedSet<String> ss = new TreeSet<>();
        while (sc.hasNext()) {
            ss.add(sc.next().toLowerCase());
        }
        for (String i : ss) {
            System.out.println(i);
        }
    }
}

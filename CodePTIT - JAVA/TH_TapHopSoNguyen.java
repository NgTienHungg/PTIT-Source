/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

public class TH_TapHopSoNguyen {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        SortedSet<Integer> sA = new TreeSet<>();
        SortedSet<Integer> sB = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            sA.add(sc.nextInt());
        }
        for (int i = 0; i < m; i++) {
            sB.add(sc.nextInt());
        }

        Set<Integer> union = new TreeSet<>();
        union.addAll(sA);
        union.retainAll(sB);
        for (Integer i : union) {
            System.out.print(i + " ");
        }
        System.out.println();

        sA.removeAll(union);
        for (Integer i : sA) {
            System.out.print(i + " ");
        }
        System.out.println();

        sB.removeAll(union);
        for (Integer i : sB) {
            System.out.print(i + " ");
        }
    }
}

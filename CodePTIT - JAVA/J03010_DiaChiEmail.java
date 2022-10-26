/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J03010_DiaChiEmail {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<String> dd = new ArrayList<>();
        while (n-- > 0) {
            String[] ar = sc.nextLine().trim().toLowerCase().split("\\s+");
            String s = ar[ar.length - 1];
            for (int i = 0; i < ar.length - 1; i++) {
                s += ar[i].charAt(0);
            }
            dd.add(s);
            int count = Collections.frequency(dd, s);
            s += (count == 1 ? "" : count) + "@ptit.edu.vn";
            System.out.println(s);
        }
    }
}

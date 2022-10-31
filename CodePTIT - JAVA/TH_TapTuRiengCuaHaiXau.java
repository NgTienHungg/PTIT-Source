/* Author: NgTienHungg */

import java.util.HashSet;
import java.util.Scanner;

public class TH_TapTuRiengCuaHaiXau {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());

        while (T-- > 0) {
            String[] a = sc.nextLine().split("\\s+");
            String b = sc.nextLine();

            HashSet<String> c = new HashSet<>();
            for (String i : a) {
                if (!b.contains(i)) {
                    c.add(i);
                }
            }
            for (String i : c) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}

//2
//abc ab ab ab abcd
//ab abc
//aaa xyz ab zzz abc dd dd abc
//xyz dd ttt sas cdc

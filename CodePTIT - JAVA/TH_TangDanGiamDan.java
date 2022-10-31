/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class TH_TangDanGiamDan {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            ArrayList<Integer> chan = new ArrayList<>();
            ArrayList<Integer> le = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                if (x % 2 == 0 && !chan.contains(x)) {
                    chan.add(x);
                } else if (x % 2 == 1 && !le.contains(x)) {
                    le.add(x);
                }
            }

            Collections.sort(chan);
            Collections.sort(le, Collections.reverseOrder());

            for (int i : chan) {
                System.out.print(i + " ");
            }
            System.out.println("");
            for (int i : le) {
                System.out.print(i + " ");
            }
            System.out.println("");
        }
    }
}

//2
//10
//3 7 7 2 12 8 8 5 4 888
//5
//1 2 3 3 5

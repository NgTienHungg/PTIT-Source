/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class TH_TinhTongCacChuSo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            String s = sc.next();
            int sum = 0;
            List<Character> lst = new ArrayList<>();
            for (int i = 0; i < s.length(); i++) {
                if (Character.isDigit(s.charAt(i))) {
                    sum += s.charAt(i) - '0';
                } else {
                    lst.add(s.charAt(i));
                }
            }
            Collections.sort(lst);
            for (Character i : lst) {
                System.out.print(i);
            }
            System.out.println(sum);
        }
    }
}

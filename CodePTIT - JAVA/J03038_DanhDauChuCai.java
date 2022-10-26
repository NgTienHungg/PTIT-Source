/* Author: NgTienHungg */

import java.util.Scanner;

public class J03038_DanhDauChuCai {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int[] dd = new int[127];
        for (int i = 0; i < s.length(); i++) {
            dd[s.charAt(i)]++;
        }
        int res = 0;
        for (char i = 'a'; i <= 'z'; i++) {
            if (dd[i] > 0) {
                res++;
            }
        }
        System.out.println(res);
    }
}

/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class TH_ChuSoNguyenTo {

    public static char[] prime = {'2', '3', '5', '7'};
    public static int n;
    public static List<Long> res;

    public static boolean isValid(String s) {
        if (s.charAt(s.length() - 1) == '2') {
            return false;
        }
        int[] dd = new int[4];
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < 4; j++) {
                if (s.charAt(i) == prime[j])   {
                    dd[j] = 1;
                }
            }
        }
        for (int i = 0; i < 4; i++) {
            if (dd[i] == 0) {
                return false;
            }
        }
        return true;
    }

    public static void Try(int k, String s) {
        if (k >= 4) {
            if (isValid(s)) {
                res.add(Long.parseLong(s));
            }
        }
        if (k == n) {
            return;
        }
        for (int i = 0; i < 4; i++) {
            Try(k + 1, s + prime[i]);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        res = new ArrayList<>();
        Try(0, "");
        Collections.sort(res);
        for (Long e : res) {
            System.out.println(e);
        }
    }
}

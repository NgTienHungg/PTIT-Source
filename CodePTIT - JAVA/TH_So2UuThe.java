/* Author: NgTienHungg */

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class TH_So2UuThe {

    public static boolean isValid(String s) {
        if (s.equals("") || s.charAt(0) == '0') {
            return false;
        }

        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            cnt += s.charAt(i) == '2' ? 1 : 0;
        }
        return cnt * 2 > s.length();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            Queue<String> q = new LinkedList<>();
            q.add("");
            while (n > 0) {
                String s = q.poll();
                if (isValid(s)) {
                    System.out.print(s + " ");
                    n--;
                }
                q.add(s + "0");
                q.add(s + "1");
                q.add(s + "2");
            }
            System.out.println("");
        }
    }
}

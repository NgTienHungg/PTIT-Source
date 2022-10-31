/* Author: NgTienHungg */

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class JKT013_SoLocPhat {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            Stack<String> res = new Stack<>();
            Queue<String> q = new LinkedList<>();
            q.add("");
            while (!q.isEmpty()) {
                String s = q.poll();
                if (!s.equals("")) {
                    res.add(s);
                }
                if (s.length() == n) {
                    continue;
                }
                q.add(s + "6");
                q.add(s + "8");
            }
            System.out.println(res.size());
            while (!res.isEmpty()) {
                System.out.print(res.pop() + " ");
            }
            System.out.println("");
        }
    }
}

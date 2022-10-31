/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.Stack;

public class J08027_GoBanPhim {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        Stack<Character> st1 = new Stack<>();
        Stack<Character> st2 = new Stack<>();
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) == '<') {
                if (!st1.isEmpty()) {
                    st2.push(st1.pop());
                }
            } else if (a.charAt(i) == '>') {
                if (!st2.isEmpty()) {
                    st1.push(st2.pop());
                }
            } else if (a.charAt(i) == '-') {
                if (!st1.isEmpty()) {
                    st1.pop();
                }
            } else {
                st1.push(a.charAt(i));
            }
        }
        while (!st2.isEmpty()) {
            st1.push(st2.pop());
        }
        for (int i = 0; i < st1.size(); i++) {
            System.out.print(st1.get(i));
        }
        sc.close();
    }
}

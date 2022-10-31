/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.Stack;

public class J08020_KiemTraDayNgoacDung {

    public static int Check(String s) {
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char k = s.charAt(i);
            switch (k) {
                case ')':
                    if (st.empty() || st.peek() != '(') {
                        return 0;
                    }
                    st.pop();
                    break;
                case ']':
                    if (st.empty() || st.peek() != '[') {
                        return 0;
                    }
                    st.pop();
                    break;
                case '}':
                    if (st.empty() || st.peek() != '{') {
                        return 0;
                    }
                    st.pop();
                    break;
                default:
                    st.push(k);
                    break;
            }
        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            if (Check(s) == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}

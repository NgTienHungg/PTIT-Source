/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.Stack;

public class TH_KiemTraCauVietDungQuyTac {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            Stack<Character> st = new Stack<>();
            String s = sc.nextLine();
            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                if (!st.empty() && c == ')' && st.peek() == '(') {
                    st.pop();
                } else if (!st.empty() && c == ']' && st.peek() == '[') {
                    st.pop();
                } else if (c == '(' || c == ')' || c == '[' || c == ']') {
                    st.push(c);
                }
            }
            System.out.println(st.empty() ? "YES" : "NO");
        }
    }
}

//3
//[ graph ] ( binary tree ).
//Dynamic programming )( devide and conquer.
//([ (([( [ ] ) ( ) (( ))] )) ]).

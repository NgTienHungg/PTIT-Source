/* Author: NgTienHungg */

import java.util.Scanner;
import java.util.Stack;

public class TH_HauTo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            String[] a = sc.nextLine().trim().split("\\s+");
            Stack<Long> st = new Stack<>();
            for (String i : a) {
                if (i.equals("+") || i.equals("-") || i.equals("*") || i.equals("/")) {
                    long y = st.pop();
                    long x = st.pop();
                    if (i.equals("+")) {
                        st.push(x + y);
                    } else if (i.equals("-")) {
                        st.push(x - y);
                    } else if (i.equals("*")) {
                        st.push(x * y);
                    } else if (i.equals("/")) {
                        st.push(x / y);
                    }
                } else {
                    st.push(Long.parseLong(i));
                }
            }
            System.out.println(st.peek());
        }
    }
}

//3
//7
//2 3 1 * + 9 -
//7
//8 7 5 * + 9 -
//3
//-10 -4 +

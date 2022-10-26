/* Author: NgTienHungg */

import java.util.Scanner;

public class J01023_ToanLopBa {

    public static String exp;
    public static boolean hasAnswer;
    public static char[] signs = {'+', '-'};

    public static boolean isValid() {
        int a = Integer.parseInt(exp.substring(0, 2));
        int b = Integer.parseInt(exp.substring(5, 7));
        int c = Integer.parseInt(exp.substring(10));

        if (a < 10 || b < 10 || c < 10) {
            return false;
        }

        if (exp.charAt(3) == '+') {
            return a + b == c;
        } else {
            return a - b == c;
        }
    }

    public static String changeChar(String src, int index, char expect) {
        return src.substring(0, index) + expect + src.substring(index + 1);
    }

    public static void Try(int index) {
        if (hasAnswer) {
            return;
        }

        if (index == exp.length()) {
            if (isValid()) {
                hasAnswer = true;
                System.out.println(exp);
            }
            return;
        }

        if (exp.charAt(index) == '?') {
            if (index == 3) {
                for (int i = 0; i < 2; i++) {
                    exp = changeChar(exp, index, signs[i]);
                    Try(index + 1);
                }
            } else {
                for (int i = '0'; i <= '9'; i++) {
                    exp = changeChar(exp, index, (char) (i));
                    Try(index + 1);
                }
            }
            exp = changeChar(exp, index, '?');
        } else {
            Try(index + 1);
        }
    }

    public static void testCase() {
        // không tồn tại phép nhân hay chia giữa 2 số có 2 cs mà ra kqua là 1 số có 2 cs
        for (int i = 0; i < exp.length(); i++) {
            if (exp.charAt(i) == '*' || exp.charAt(i) == '/') {
                System.out.println("WRONG PROBLEM!");
                return;
            }
        }

        hasAnswer = false;
        Try(0);

        if (!hasAnswer) {
            System.out.println("WRONG PROBLEM!");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            exp = sc.nextLine();
            testCase();
        }
    }
}

//2
//?0 ? 12 = 28
//40 / ?3 = ??

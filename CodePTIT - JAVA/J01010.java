/* Author: NgTienHungg */
package codeptit;

import java.util.ArrayList;
import java.util.Scanner;

public class J01010 {

    public static Scanner ip = new Scanner(System.in);

    public static void testCase() {
        String s = ip.next();
        ArrayList<Integer> res = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '0':
                case '8':
                case '9':
                    res.add(0);
                    break;
                case '1':
                    res.add(1);
                    break;
                default:
                    System.out.println("INVALID");
                    return;
            }
        }
        while (res.get(0) == 0) {
            res.remove(0);
        }
        if (res.isEmpty()) {
            System.out.println("INVALID");
        } else {
            for (int i : res) {
                System.out.print(i);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int T = ip.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}

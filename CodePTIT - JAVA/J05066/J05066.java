/* Author: NgTienHungg */
package J05066;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class J05066 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = Integer.parseInt(sc.nextLine());
        List<Staff> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String input = sc.nextLine();
            String id = input.substring(0, 7);
            String name = input.substring(8);
            list.add(new Staff(id, name));
        }
        Collections.sort(list);

        int m = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < m; i++) {
            String s = sc.nextLine().toLowerCase();
            for (Staff e : list) {
                if (e.isContains(s)) {
                    System.out.println(e);
                }
            }
            System.out.println("");
        }
    }
}

//6
//GD08001 Nguyen Kim Loan
//TP05002 Hoang Thanh Tuan
//TP05001 Tran Binh Nguyen
//PP06002 Phan Trung Tuan
//PP06001 Tran Quoc Huy
//NV04003 Vo Van Lan
//2
//OA
//aN

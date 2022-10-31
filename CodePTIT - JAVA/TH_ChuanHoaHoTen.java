/* Author: NgTienHungg */

import java.util.Scanner;

public class TH_ChuanHoaHoTen {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int option = sc.nextInt();
            sc.nextLine();
            String[] arr = sc.nextLine().toLowerCase().split("\\s+");
            for (int i = 0; i < arr.length; i++) {
                arr[i] = arr[i].substring(0, 1).toUpperCase() + arr[i].substring(1);
            }

            int len = arr.length;
            if (option == 1) {
                System.out.print(arr[len - 1] + " ");
                for (int i = 0; i < len - 1; i++) {
                    System.out.print(arr[i] + " ");
                }
            } else {
                for (int i = 1; i < len; i++) {
                    System.out.print(arr[i] + " ");
                }
                System.out.print(arr[0]);
            }
            System.out.println();
        }
    }
}

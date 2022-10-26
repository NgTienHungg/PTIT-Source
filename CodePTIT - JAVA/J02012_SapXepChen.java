/* Author: NgTienHungg */

import java.util.Scanner;

public class J02012_SapXepChen {

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = ip.nextInt();
        }
        for (int i = 0; i < n; i++) {
            int id = i; // chèn vào cuối xong swap dần lên trên
            while (id > 0 && a[id] < a[id - 1]) {
                int tmp = a[id];
                a[id] = a[id - 1];
                a[id - 1] = tmp;
                id--;
            }
            System.out.printf("Buoc %d: ", i);
            for (int j = 0; j <= i; j++) {
                System.out.print(a[j] + " ");
            }
            System.out.println();
        }
    }
}

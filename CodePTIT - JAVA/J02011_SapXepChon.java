/* Author: NgTienHungg */

import java.util.Scanner;

public class J02011_SapXepChon {

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = ip.nextInt();
        }

        for (int i = 0; i < n - 1; i++) {
            int id = i; // vị trí phần tử có giá trị nhỏ nhất (trong đoạn sau chưa được sort)
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[id]) {
                    id = j;
                }
            }

            int tmp = a[i];
            a[i] = a[id];
            a[id] = tmp;

            System.out.printf("Buoc %d: ", i + 1);
            for (int j = 0; j < n; j++) {
                System.out.print(a[j] + " ");
            }
            System.out.println();
        }
    }
}

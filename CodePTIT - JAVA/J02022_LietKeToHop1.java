/* Author: NgTienHungg */

import java.util.Scanner;

public class J02022_LietKeToHop1 {

    public static int[] a = new int[10];
    public static int n, k, count = 0;

    public static void print() {
        count++;
        for (int i = 1; i <= k; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void Try(int i) {
        for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
            a[i] = j;
            if (i == k) {
                print();
            } else {
                Try(i + 1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        n = ip.nextInt();
        k = ip.nextInt();
        Try(1);
        System.out.printf("Tong cong co %d to hop", count);
    }
}

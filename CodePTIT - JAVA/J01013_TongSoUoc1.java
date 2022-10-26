/* Author: NgTienHungg */

import java.util.Scanner;

public class J01013_TongSoUoc1 {

    public static final int N = (int) 2e6;
    public static int[] prime = new int[N + 5];

    // tìm ước nguyên tố nhỏ nhất của các số
    public static void findMinDivisor() {
        for (int i = 2; i * i <= N; i++) {
            if (prime[i] == 0) {
                for (int j = i; j <= N; j += i) {
                    if (prime[j] == 0) {
                        prime[j] = i;
                    }
                }
            }
        }
        for (int i = 2; i <= N; i++) {
            if (prime[i] == 0) {
                prime[i] = i;
            }
        }
    }

    public static int calculate(int n) {
        if (prime[n] == 0) {
            return n;
        }
        int sum = 0;
        while (n != 1) {
            sum += prime[n];
            n /= prime[n];
        }
        return sum;
    }

    public static void main(String[] args) {
        findMinDivisor();
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        long sum = 0;
        for (int i = 0; i < n; i++) {
            int x = ip.nextInt();
            sum += calculate(x);
        }
        System.out.println(sum);
    }
}

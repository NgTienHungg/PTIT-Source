/* Author: NgTienHungg */

import java.util.Scanner;

class Fraction {

    private long a, b;

    Fraction() {
        a = 0;
        b = 1;
    }

    Fraction(long a, long b) {
        this.a = a;
        this.b = b;
    }

    private long gcd(long x, long y) {
        while (y != 0) {
            long z = x % y;
            x = y;
            y = z;
        }
        return x;
    }

    @Override
    public String toString() {
        long g = gcd(this.a, this.b);
        return a / g + "/" + b / g;
    }
}

public class J04003_PhanSo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        Fraction f = new Fraction(a, b);
        System.out.println(f);
    }
}

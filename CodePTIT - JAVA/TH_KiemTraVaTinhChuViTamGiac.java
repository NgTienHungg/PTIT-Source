/* Author: NgTienHungg */

import java.util.Scanner;

class Point {

    public double x, y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double distance(Point p) {
        // tinh k/c tu this toi p
        return Math.sqrt(Math.pow(x - p.x, 2) + Math.pow(y - p.y, 2));
    }
}

public class TH_KiemTraVaTinhChuViTamGiac {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            Point A = new Point(sc.nextDouble(), sc.nextDouble());
            Point B = new Point(sc.nextDouble(), sc.nextDouble());
            Point C = new Point(sc.nextDouble(), sc.nextDouble());

            double a = B.distance(C);
            double b = A.distance(C);
            double c = A.distance(B);

            if (a + b <= c || b + c <= a || a + c <= b) {
                System.out.println("INVALID");
            } else {
                double P = a + b + c;
                System.out.printf("%.6f\n", P);
            }
        }
    }
}

//3
//0 0 0 5 0 199
//1 1 1 1 1 1
//0 0 0 5 5 0

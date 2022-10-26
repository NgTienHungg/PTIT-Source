/* Author: NgTienHungg */

import static java.lang.Math.*;
import java.util.Scanner;

class Point {

    private double x;
    private double y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    double distance(Point p) {
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }

    double distance(Point a, Point b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }

    @Override
    public String toString() {
        return x + " " + y;
    }
}

public class J04001_KhaiBaoLopPoint {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            double x = sc.nextDouble();
            double y = sc.nextDouble();
            Point a = new Point(x, y);
            x = sc.nextDouble();
            y = sc.nextDouble();
            Point b = new Point(x, y);
            System.out.printf("%.4f\n", a.distance(b));
        }
    }
}

/* Author: NgTienHungg */

import java.util.Scanner;

class ComplexNumber {

    private int real;
    private int imaginary;

    public ComplexNumber(int real, int imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    public int getReal() {
        return real;
    }

    public void setReal(int real) {
        this.real = real;
    }

    public int getImaginary() {
        return imaginary;
    }

    public void setImaginary(int imaginary) {
        this.imaginary = imaginary;
    }

    public static ComplexNumber sumTwoComplex(ComplexNumber a, ComplexNumber b) {
        return new ComplexNumber(a.real + b.real, a.imaginary + b.imaginary);
    }

    public static ComplexNumber mulTwoComplex(ComplexNumber a, ComplexNumber b) {
        return new ComplexNumber(a.real * b.real - a.imaginary * b.imaginary,
                a.imaginary * b.real + a.real * b.imaginary);
    }

    @Override
    public String toString() {
        String res = "";
        res += real + " ";
        if (imaginary >= 0) {
            res += "+ " + imaginary + "i";
        } else {
            res += "- " + (-imaginary) + "i";
        }
        return res;
    }
}

public class J04018_SoPhuc {

    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int t = scanner.nextInt();
        while (t-- > 0) {
            solution();
        }
    }

    public static void solution() {
        ComplexNumber a = new ComplexNumber(scanner.nextInt(), scanner.nextInt());
        ComplexNumber b = new ComplexNumber(scanner.nextInt(), scanner.nextInt());

        // sum = A + B
        ComplexNumber sum = ComplexNumber.sumTwoComplex(a, b);
        // C = (A + B) * A = sum * A
        ComplexNumber c = ComplexNumber.mulTwoComplex(sum, a);
        // D = (A + B) ^ 2
        ComplexNumber d = ComplexNumber.mulTwoComplex(sum, sum);
        System.out.println(c + ", " + d);
    }
}

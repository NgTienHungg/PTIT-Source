/* Author: NgTienHungg */

import java.util.Scanner;

public class J01003_GiaiPhuongTrinhBacNhat {

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        float a = ip.nextFloat();
        float b = ip.nextFloat();
        if (a == 0f) {
            if (b == 0f) {
                System.out.println("VSN");
            } else {
                System.out.println("VN");
            }
        } else {
            System.out.println(String.format("%.2f", -b / a));
        }
    }
}

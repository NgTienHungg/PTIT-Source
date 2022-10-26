/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07021_ChuanHoaXauHoTenTrongFile {

    public static String normalize(String s) {
        return s.substring(0, 1).toUpperCase() + s.substring(1).toLowerCase();
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        while (true) {
            String line = sc.nextLine();
            if (line.equals("END")) {
                break;
            }
            String[] list = line.trim().split("\\s+");
            String res = "";
            for (String i : list) {
                res += normalize(i) + " ";
            }
            System.out.println(res);
        }
    }
}

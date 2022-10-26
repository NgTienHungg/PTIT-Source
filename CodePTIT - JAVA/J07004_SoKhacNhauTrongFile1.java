/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07004_SoKhacNhauTrongFile1 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int[] dd = new int[1000];
        while (sc.hasNext()) {
            int n = Integer.parseInt(sc.next());
            dd[n]++;
        }
        for (int i = 0; i < 1000; i++) {
            if (dd[i] > 0) {
                System.out.printf("%d %d\n", i, dd[i]);
            }
        }
    }
}

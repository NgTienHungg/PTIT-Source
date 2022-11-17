/* Author: NgTienHungg */

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;

public class J07032_SoThuanNghichTrongFile {

    public static boolean isValid(String s) {
        StringBuilder sb = new StringBuilder(s).reverse();
        if (!sb.toString().equals(s)) {
            return false;
        }

        if (s.length() % 2 == 0 || s.length() == 1) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if ((s.charAt(i) - '0') % 2 == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        int[] dd = new int[1000001];

        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> al1 = (ArrayList<Integer>) ois1.readObject();

        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> al2 = (ArrayList<Integer>) ois2.readObject();

        for (Integer x : al1) {
            if (isValid(x.toString()) && al2.contains(x)) {
                dd[x]++;
            }
        }

        for (Integer x : al2) {
            if (isValid(x.toString()) && dd[x] != 0) {
                dd[x]++;
            }
        }

        int dem = 0;
        for (int i = 0; i <= 1000000; i++) {
            if (dd[i] > 0) {
                System.out.println(i + " " + dd[i]);
                dem++;
            }
            if (dem == 10) {
                break;
            }
        }
    }
}

/* Author: NgTienHungg */

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class TH_SoKhongGiam {

    public static boolean isValid(int n) {
        if (n < 10) {
            return false;
        }
        String s = n + "";
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) < s.charAt(i - 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ArrayList<Integer> al1 = (ArrayList<Integer>) ois1.readObject();
        int[] a = new int[100000];
        for (Integer i : al1) {
            if (isValid(i)) {
                a[i]++;
            }
        }

        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> al2 = (ArrayList<Integer>) ois2.readObject();
        int[] b = new int[100000];
        for (Integer i : al2) {
            if (isValid(i)) {
                b[i]++;
            }
        }

        for (int i = 10; i < 100000; i++) {
            if (a[i] > 0 && b[i] > 0) {
                System.out.println(i + " " + a[i] + " " + b[i]);
            }
        }
    }
}

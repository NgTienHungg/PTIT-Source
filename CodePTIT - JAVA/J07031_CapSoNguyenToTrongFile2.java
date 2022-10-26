/* Author: NgTienHungg */

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

public class J07031_CapSoNguyenToTrongFile2 {

    public static boolean isPrime(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return n >= 2;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> a1 = (ArrayList<Integer>) ois1.readObject();
        Set<Integer> s1 = new TreeSet<>();
        for (int i : a1) {
            if (isPrime(i)) {
                s1.add(i);
            }
        }

        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> a2 = (ArrayList<Integer>) ois2.readObject();

        final int SUM = 1000000;
        for (Integer i : s1) {
            Integer j = SUM - i;
            if (i >= j) {
                break;
            }
            if (s1.contains(j) && !a2.contains(i) && !a2.contains(j)) {
                System.out.println(i + " " + (SUM - i));
            }
        }
    }
}

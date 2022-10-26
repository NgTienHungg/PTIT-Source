/* Author: NgTienHungg */

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

public class J07030_CapSoNguyenToTrongFile1 {

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
        List<Integer> al1 = (ArrayList<Integer>) ois1.readObject();
        Set<Integer> ts1 = new TreeSet<>();
        for (int i : al1) {
            if (isPrime(i)) {
                ts1.add(i);
            }
        }

        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> al2 = (ArrayList<Integer>) ois2.readObject();
        Set<Integer> ts2 = new TreeSet<>();
        for (int i : al2) {
            if (isPrime(i)) {
                ts2.add(i);
            }
        }

        final int SUM = 1000000;
        for (Integer i : ts1) {
            if (i * 2 >= SUM) {
                break;
            }
            if (ts2.contains(SUM - i)) {
                System.out.println(i + " " + (SUM - i));
            }
        }
    }
}

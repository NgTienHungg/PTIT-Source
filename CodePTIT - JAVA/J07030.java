/* Author: NgTienHungg */
package codeptit;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

public class J07030 {

    public static boolean isPrime(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return n >= 2;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> a1 = (ArrayList<Integer>) ois.readObject();
        List<Integer> a2 = (ArrayList<Integer>) ois.readObject();
        Set<Integer> s1 = new TreeSet<>();
        Set<Integer> s2 = new TreeSet<>();
        for (int i : a1) {
            if (isPrime(i)) {
                s1.add(i);
            }
        }
        for (int i : a2) {
            if (isPrime(i)) {
                s2.add(i);
            }
        }
        
        final int SUM = 1000000;
        for (Integer i : s1) {
            if (s2.contains(SUM - i)) {
                System.out.println(i + " " + (SUM - i));
            }
        }
    }
}

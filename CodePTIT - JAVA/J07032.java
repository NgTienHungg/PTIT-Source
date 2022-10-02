/* Author: NgTienHungg */
package codeptit;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

class PairII implements Comparable<PairII> {

    public int key;
    public int value;

    public PairII(int key, int value) {
        this.key = key;
        this.value = value;
    }

    @Override
    public int compareTo(PairII other) {
        if (this.value == other.value) {
            return this.key - other.key; // ascending
        }
        return -(this.value - other.value); // descending
    }

    @Override
    public String toString() {
        return key + " " + value;
    }
}

public class J07032 {

    public static boolean isValid(String s) {
        for (int i = 0; i < s.length(); i++) {
            if ((s.charAt(i) - '0') % 2 == 0) {
                return false;
            }
        }
        return s.length() != 1 && s.length() % 2 == 1;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> al1 = (ArrayList<Integer>) ois1.readObject();
        
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> al2 = (ArrayList<Integer>) ois2.readObject();

        List<PairII> res = new ArrayList<>();
        for (Integer i : al1) {
            if (al2.contains(i) && isValid(i.toString())) {
                int size1 = al1.size(); // size before remove all element == i in arrayList
                al1.removeAll(Arrays.asList(i));
                int size2 = al2.size();
                al2.removeAll(Arrays.asList(i));
                int count = (size1 - al1.size()) + (size2 - al2.size());
                res.add(new PairII(i, count));
            }
        }

        Collections.sort(res);
        int count = 0;
        for (PairII p : res) {
            System.out.println(p);
            count++;
            if (count == 10) {
                break;
            }
        }
    }
}

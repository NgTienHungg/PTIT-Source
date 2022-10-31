/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeSet;

class WordSet {

    public TreeSet<String> set;

    public WordSet(String s) {
        String[] words = s.toLowerCase().split("\\s+");
        set = new TreeSet<>(Arrays.asList(words));
    }

    public String union(WordSet other) {
        TreeSet<String> uniSet = (TreeSet<String>) set.clone();
        uniSet.addAll(other.set);
        return String.join(" ", uniSet);
    }

    public String intersection(WordSet other) {
        TreeSet<String> interSet = (TreeSet<String>) set.clone();
        interSet.retainAll(other.set);
        return String.join(" ", interSet);
    }
}

public class TH_TapTuKhacNhau {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}

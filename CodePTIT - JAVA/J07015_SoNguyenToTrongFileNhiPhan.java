/* Author: NgTienHungg */

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.Arrays;
import java.util.List;

public class J07015_SoNguyenToTrongFileNhiPhan {

    public static int[] prime = new int[10000];

    public static void sieve() {
        Arrays.fill(prime, 1);
        prime[0] = prime[1] = 0;
        for (int i = 2; i <= 100; i++) {
            if (prime[i] == 1) {
                for (int j = i * i; j < 10000; j += i) {
                    prime[j] = 0;
                }
            }
        }
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        sieve();
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        List<Integer> list = (List<Integer>) ois.readObject();
        int[] dd = new int[10000];
        for (Integer i : list) {
            dd[i] += prime[i];
        }
        for (int i = 2; i < 10000; i++) {
            if (dd[i] > 0) {
                System.out.println(i + " " + dd[i]);
            }
        }
    }
}

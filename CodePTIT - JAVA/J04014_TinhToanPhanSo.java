/* Author: NgTienHungg */

import java.math.BigInteger;
import java.util.Scanner;

class PhanSo {

    private long tuSo;
    private long mauSo;

    public PhanSo(long tuSo, long mauSo) {
        this.tuSo = tuSo;
        this.mauSo = mauSo;
    }

    public long getTuSo() {
        return tuSo;
    }

    public long getMauSo() {
        return mauSo;
    }

    public static long gcdThing(long a, long b) {
        BigInteger b1 = BigInteger.valueOf(a);
        BigInteger b2 = BigInteger.valueOf(b);
        BigInteger gcd = b1.gcd(b2);
        return gcd.longValue();
    }

    public static PhanSo rutGon(PhanSo a) {
        long gcd = gcdThing(a.tuSo, a.mauSo);
        PhanSo ans = new PhanSo(a.tuSo / gcd, a.mauSo / gcd);
        return ans;
    }

    @Override
    public String toString() {
        return tuSo + "/" + mauSo;
    }
}

public class J04014_TinhToanPhanSo {

    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int t = scanner.nextInt();
        while (t-- > 0) {
            solution();
        }
    }

    public static void solution() {
        PhanSo phanSoA = new PhanSo(scanner.nextLong(), scanner.nextLong());
        PhanSo phanSoB = new PhanSo(scanner.nextLong(), scanner.nextLong());

        // C = (A + B) ^ 2
        PhanSo phanSoC = new PhanSo((long) Math.pow(phanSoA.getTuSo() * phanSoB.getMauSo() + phanSoB.getTuSo() * phanSoA.getMauSo(), 2),
                (long) Math.pow(phanSoA.getMauSo() * phanSoB.getMauSo(), 2));
        phanSoC = PhanSo.rutGon(phanSoC);

        // D = A x B x C
        PhanSo phanSoD = new PhanSo(phanSoA.getTuSo() * phanSoB.getTuSo() * phanSoC.getTuSo(), phanSoA.getMauSo() * phanSoB.getMauSo() * phanSoC.getMauSo());
        phanSoD = PhanSo.rutGon(phanSoD);
        System.out.println(phanSoC + " " + phanSoD);
    }
}

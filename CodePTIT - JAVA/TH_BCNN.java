
import java.util.Scanner;

public class TH_BCNN {

    public static long gcd(long a, long b) {
        while (b > 0) {
            long x = a % b;
            a = b;
            b = x;
        }
        return a;
    }

    public static long lcm(long a, long b) {
        return a * b / gcd(a, b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            String s = sc.next();
            int len = s.length();

            if (len % 2 == 1) {
                System.out.println("INVALID");
                continue;
            }
            long a = Long.parseLong(s.substring(0, len / 2));
            long b = Long.parseLong(s.substring(len / 2));

            System.out.println(lcm(a, b));
        }
    }
}

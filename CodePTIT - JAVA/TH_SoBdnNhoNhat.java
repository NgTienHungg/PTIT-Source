
import java.math.BigInteger;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class TH_SoBdnNhoNhat {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            BigInteger n = sc.nextBigInteger();
            Queue<String> q = new LinkedList<>();
            q.add("1");
            while (true) {
                String s = q.poll();
                BigInteger p = new BigInteger(s);
                if (p.mod(n).toString().equals("0")) {
                    System.out.println(p);
                    break;
                }
                q.add(s + "0");
                q.add(s + "1");
            }
        }
    }
}

//3
//2
//12
//17

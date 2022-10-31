/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class TH_ThietLapEmail2 {

    private static String getMail(String[] words) {
        String mail = words[words.length - 1];
        for (int i = 0; i < words.length - 1; i++) {
            mail += words[i].charAt(0);
        }
        return mail;
    }

    private static String getName(String[] words) {
        String name = "";
        for (String word : words) {
            name += word + " ";
        }
        return name;
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        Map<String, Integer> mName = new HashMap<>();
        Map<String, Integer> mMail = new HashMap<>();

        while (sc.hasNext()) {
            String[] words = sc.nextLine().trim().toLowerCase().split("\\s+");
            String name = getName(words);
            String mail = getMail(words);

            if (!mName.containsKey(name)) {
                mName.put(name, 1);
                int stt = (mMail.containsKey(mail) ? mMail.get(mail) : 0) + 1;
                mMail.put(mail, stt);
                System.out.println(mail + (stt > 1 ? stt : "") + "@ptit.edu.vn");
            }
        }
    }
}

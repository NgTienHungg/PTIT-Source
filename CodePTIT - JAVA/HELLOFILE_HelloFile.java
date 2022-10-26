/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class HELLOFILE_HelloFile {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("Hello.txt"));
        while (sc.hasNext()) {
            System.out.println(sc.nextLine());
        }
    }
}

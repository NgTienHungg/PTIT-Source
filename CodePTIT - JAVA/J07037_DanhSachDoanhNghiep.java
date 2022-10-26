/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class Company implements Comparable<Company> {

    private String id, name;
    private int count;

    public Company(String id, String name, int count) {
        this.id = id;
        this.name = name;
        this.count = count;
    }

    public String getId() {
        return id;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + count;
    }

    @Override
    public int compareTo(Company o) {
        return id.compareTo(o.getId());
    }
}

public class J07037_DanhSachDoanhNghiep {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DN.in"));
        int n = Integer.parseInt(sc.nextLine());
        Company[] companies = new Company[n];
        for (int i = 0; i < n; i++) {
            String id = sc.nextLine();
            String name = sc.nextLine();
            int stc = Integer.parseInt(sc.nextLine());
            companies[i] = new Company(id, name, stc);
        }
        Arrays.sort(companies);
        for (Company i : companies) {
            System.out.println(i);
        }
    }
}

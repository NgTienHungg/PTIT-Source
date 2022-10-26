/* Author: NgTienHungg */

import java.util.Scanner;

class Teacher {

    private String code, name;
    private int coeSalary, allowance, baseSalary;

    public Teacher() {

    }

    public Teacher(String code, String name, int baseSalary) {
        this.code = code;
        this.name = name;
        this.baseSalary = baseSalary;

        coeSalary = Integer.parseInt(code.substring(2));

        if (code.substring(0, 2).equals("HT")) {
            allowance = 2000000;
        } else if (code.substring(0, 2).equals("HP")) {
            allowance = 900000;
        } else if (code.substring(0, 2).equals("GV")) {
            allowance = 500000;
        }
    }

    public int getSalary() {
        return baseSalary * coeSalary + allowance;
    }

    @Override
    public String toString() {
        return code + " " + name + " " + coeSalary + " " + allowance + " " + getSalary();
    }
}

public class J04015_TinhThuNhapGiaoVien {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String code = sc.nextLine();
        String name = sc.nextLine();
        int bSalary = sc.nextInt();
        Teacher tc = new Teacher(code, name, bSalary);
        System.out.println(tc);
    }
}

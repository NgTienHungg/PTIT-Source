/* Author: NgTienHungg */

import java.util.Scanner;

class Officer {

    private String id, name;
    private int salary, bonus, allowance;

    public Officer() {

    }

    public Officer(String name, int wage, int workingDays, String role) {
        this.id = "NV01";
        this.name = name;
        this.salary = wage * workingDays;

        if (workingDays >= 25) {
            this.bonus = (int) (salary * 0.2f);
        } else if (workingDays >= 22) {
            this.bonus = (int) (salary * 0.1f);
        } else {
            this.bonus = 0;
        }

        switch (role) {
            case "GD":
                allowance = 250000;
                break;
            case "PGD":
                allowance = 200000;
                break;
            case "TP":
                allowance = 180000;
                break;
            case "NV":
                allowance = 150000;
                break;
        }
    }

    public int getIncome() {
        return salary + bonus + allowance;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + salary + " " + bonus + " " + allowance + " " + getIncome();
    }
}

public class J04012_BaiToanTinhCong {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int salary = Integer.parseInt(sc.nextLine());
        int workingDays = Integer.parseInt(sc.nextLine());
        String role = sc.nextLine();
        Officer officer = new Officer(name, salary, workingDays, role);
        System.out.println(officer);
    }
}

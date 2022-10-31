/* Author: NgTienHungg */

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

class Customer {

    private int id;
    private String name;
    private int oldN;
    private int newN;

    public Customer(int id, String name, int oldN, int newN) {
        this.id = id;
        this.name = name;
        this.oldN = oldN;
        this.newN = newN;
    }

    public String getId() {
        return String.format("KH%02d", id);
    }

    public double getAmount() {
        int n = newN - oldN;
        if (n <= 50) {
            return n * 102;
        }
        if (n <= 100) {
            return (50 * 100 + (n - 50) * 150) * 1.03;
        }
        return (50 * 100 + 50 * 150 + (n - 100) * 200) * 1.05;
    }

    @Override
    public String toString() {
        return getId() + " " + name + " " + (int) Math.ceil(getAmount());
    }
}

public class J05017_HoaDonTienNuoc {

    public static void main(String[] args) throws ParseException {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        List<Customer> customers = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            scanner.nextLine();
            customers.add(new Customer(i + 1, scanner.nextLine(), scanner.nextInt(), scanner.nextInt()));
        }

        Collections.sort(customers, new Comparator<Customer>() {
            @Override
            public int compare(Customer o1, Customer o2) {
                if (o1.getAmount() == o2.getAmount()) {
                    return o1.getId().compareTo(o2.getId());
                }
                return o1.getAmount() < o2.getAmount() ? 1 : -1;
            }
        });

        for (Customer customer : customers) {
            System.out.println(customer);
        }
    }
}

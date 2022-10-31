/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Items {

    private String id;
    private String name;
    private long quantity;
    private long unitPrice;
    private long discount;

    public Items(String id, String name, long quantity, long unitPrice, long discount) {
        this.id = id;
        this.name = name;
        this.quantity = quantity;
        this.unitPrice = unitPrice;
        this.discount = discount;
    }

    public long getTotalPrice() {
        return unitPrice * quantity - discount;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + quantity + " " + unitPrice + " " + discount + " " + getTotalPrice();
    }
}

public class J05012_TinhTien {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        ArrayList<Items> arrayList = new ArrayList<>();
        while (t-- > 0) {
            sc.nextLine();
            arrayList.add(new Items(sc.nextLine(), sc.nextLine(), sc.nextLong(), sc.nextLong(), sc.nextLong()));
        }

        Collections.sort(arrayList, new Comparator<Items>() {
            @Override
            public int compare(Items o1, Items o2) {
                return o1.getTotalPrice() < o2.getTotalPrice() ? 1 : -1;
            }
        });

        for (Items i : arrayList) {
            System.out.println(i);
        }
    }
}

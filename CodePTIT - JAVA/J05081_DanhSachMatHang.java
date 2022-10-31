/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class Product implements Comparable<Product> {

    public static int NUM_PRODUCT = 1;
    private String id, name, unit;
    private int buyingPrice, sellingPrice, profit;

    public Product(String name, String unit, int buyingPrice, int sellingPrice) {
        this.id = "MH" + String.format("%03d", NUM_PRODUCT++);
        this.name = name;
        this.unit = unit;
        this.buyingPrice = buyingPrice;
        this.sellingPrice = sellingPrice;
        profit = sellingPrice - buyingPrice;
    }

    public int getProfit() {
        return profit;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + unit + " " + buyingPrice + " " + sellingPrice + " " + profit;
    }

    @Override
    public int compareTo(Product o) {
        return o.getProfit() - this.profit;
    }
}

public class J05081_DanhSachMatHang {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<Product> list = new ArrayList<>(n);
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String unit = sc.nextLine();
            int buyingPrice = Integer.parseInt(sc.nextLine());
            int sellingPrice = Integer.parseInt(sc.nextLine());
            Product p = new Product(name, unit, buyingPrice, sellingPrice);
            list.add(p);
        }
        Collections.sort(list);
        for (Product i : list) {
            System.out.println(i);
        }
    }
}

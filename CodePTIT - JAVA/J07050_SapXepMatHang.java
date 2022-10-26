/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class Item implements Comparable<Item> {

    public static int NUM_ITEM = 1;
    private String id, name, type;
    private Float cost, price, profit;

    public Item(String name, String type, Float cost, Float price) {
        this.id = "MH" + String.format("%02d", NUM_ITEM++);
        this.name = name;
        this.type = type;
        this.cost = cost;
        this.price = price;
        this.profit = price - cost;
    }

    public float getProfit() {
        return profit;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + type + " " + String.format("%.2f", profit);
    }

    @Override
    public int compareTo(Item other) {
        return -profit.compareTo(other.getProfit());
    }
}

public class J07050_SapXepMatHang {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MATHANG.in"));
        int n = Integer.parseInt(sc.nextLine());
        Item[] items = new Item[n];
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String type = sc.nextLine();
            Float cost = Float.parseFloat(sc.nextLine());
            Float price = Float.parseFloat(sc.nextLine());
            items[i] = new Item(name, type, cost, price);
        }
        Arrays.sort(items);
        for (Item i : items) {
            System.out.println(i);
        }
    }
}

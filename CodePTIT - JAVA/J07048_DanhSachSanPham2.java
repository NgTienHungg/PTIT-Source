/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class Product implements Comparable<Product> {

    private String id, name;
    private int price, warrantyPeriod;

    public Product(String id, String name, int price, int warrantyPeriod) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.warrantyPeriod = warrantyPeriod;
    }

    public String getId() {
        return id;
    }

    public int getPrice() {
        return price;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + price + " " + warrantyPeriod;
    }

    @Override
    public int compareTo(Product other) {
        if (this.price == other.getPrice()) {
            return id.compareTo(other.getId());
        }
        return -(this.price - other.getPrice());
    }
}

public class J07048_DanhSachSanPham2 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SANPHAM.in"));
        int n = Integer.parseInt(sc.nextLine());
        Product[] products = new Product[n];
        for (int i = 0; i < n; i++) {
            String id = sc.nextLine();
            String name = sc.nextLine();
            int price = Integer.parseInt(sc.nextLine());
            int warrantyPeriod = Integer.parseInt(sc.nextLine());
            products[i] = new Product(id, name, price, warrantyPeriod);
        }
        Arrays.sort(products);
        for (Product item : products) {
            System.out.println(item);
        }
    }
}

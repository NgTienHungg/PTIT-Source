/* Author: NgTienHungg */

import java.util.Arrays;
import java.util.Scanner;

class Product implements Comparable<Product> {

    public static int NUM = 1;
    public int id;
    public String name, kind;
    public Float cost, price, profit;

    public Product(String name, String type, float cost, float price) {
        this.id = NUM++;
        this.name = name;
        this.kind = type;
        this.cost = cost;
        this.price = price;
        this.profit = price - cost;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + kind + " " + String.format("%.2f", profit);
    }

    @Override
    public int compareTo(Product o) {
        return -(this.profit.compareTo(o.profit));
    }
}

public class J05010_SapXepDanhSachMatHang {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        Product[] arr = new Product[n];
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String type = sc.nextLine();
            float cost = Float.parseFloat(sc.nextLine());
            float price = Float.parseFloat(sc.nextLine());
            arr[i] = new Product(name, type, cost, price);
        }
        Arrays.sort(arr);
        for (Product e : arr) {
            System.out.println(e);
        }
    }
}

//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37

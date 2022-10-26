/* Author: NgTienHungg */

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

class Customer implements Comparable<Customer> {

    public static int NUM_ID = 1;
    private String id, name, roomId;
    private int timeByDay, price, totalCost;

    public Customer(String name, String roomId, Date checkInDate, Date checkOutDate, int serviceFee) {
        this.id = String.format("KH%02d", NUM_ID++);
        this.name = normalizeName(name);
        this.roomId = roomId;
        switch (roomId.substring(0, 1)) {
            case "1":
                price = 25;
                break;
            case "2":
                price = 34;
                break;
            case "3":
                price = 50;
                break;
            case "4":
                price = 80;
                break;
        }
        this.timeByDay = calculateTime(checkInDate, checkOutDate);
        this.totalCost = price * timeByDay + serviceFee;
    }

    private String normalizeName(String s) {
        String[] words = s.split("\\s+");
        String res = "";
        for (int i = 0; i < words.length; i++) {
            res += words[i].substring(0, 1).toUpperCase() + words[i].substring(1).toLowerCase();
            if (i != words.length - 1) {
                res += " ";
            }
        }
        return res;
    }

    private int calculateTime(Date checkIn, Date checkOut) {
        long in = checkIn.getTime();
        long out = checkOut.getTime();
        return (int) ((out - in) / (1000 * 60 * 60 * 24)) + 1;
    }

    public Integer getTotalCost() {
        return totalCost;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + roomId + " " + timeByDay + " " + totalCost;
    }

    @Override
    public int compareTo(Customer other) {
        return -(this.getTotalCost().compareTo(other.getTotalCost()));
    }
}

public class J07051_TinhTienPhong {

    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        int n = Integer.parseInt(sc.nextLine());
        List<Customer> customers = new ArrayList<>();
        while (n-- > 0) {
            String name = sc.nextLine().trim();
            String roomId = sc.nextLine().trim();
            Date checkInDate = sdf.parse(sc.nextLine());
            Date checkOutDate = sdf.parse(sc.nextLine());
            int serviceFee = Integer.parseInt(sc.nextLine());
            Customer customer = new Customer(name, roomId, checkInDate, checkOutDate, serviceFee);
            customers.add(customer);
        }

        Collections.sort(customers);
        for (Customer customer : customers) {
            System.out.println(customer);
        }
    }
}

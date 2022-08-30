/* Author: NgTienHungg */
package codeptit;

import java.io.File;
import java.io.IOException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Scanner;

class Customer implements Comparable<Customer> {

    public static int NUM_CUSTOMER = 1;
    private String id, name, roomId;
    private Date startDay, lastDay;
    private long duration;

    public Customer(String name, String roomId, String start, String last) throws ParseException {
        this.id = "KH" + String.format("%02d", NUM_CUSTOMER++);
        this.name = name;
        this.roomId = roomId;
        SimpleDateFormat sdf = new SimpleDateFormat("dd/mm/yyyy");
        this.startDay = sdf.parse(start);
        this.lastDay = sdf.parse(last);
        this.duration = (lastDay.getTime() - startDay.getTime()) / (1000 * 60 * 60 * 24);
    }

    public long getDuration() {
        return duration;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + roomId + " " + duration;
    }

    @Override
    public int compareTo(Customer o) {
        return (int) (o.getDuration() - duration);
    }
}

public class J07046 {

    public static void main(String[] args) throws IOException, ParseException {
        ArrayList<Customer> ds = new ArrayList<>();
        Scanner sc = new Scanner(new File("KHACK.in"));
        int n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            String name = sc.nextLine();
            String roomId = sc.nextLine();
            String start = sc.nextLine();
            String last = sc.nextLine();
            Customer cus = new Customer(name, roomId, start, last);
            ds.add(cus);
        }
        Collections.sort(ds);
        for (Customer i : ds) {
            System.out.println(i);
        }
    }
}

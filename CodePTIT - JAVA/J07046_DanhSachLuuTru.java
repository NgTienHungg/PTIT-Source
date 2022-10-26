/* Author: NgTienHungg */

import java.io.File;
import java.io.IOException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

class Customer implements Comparable<Customer> {

    public static int NUM_CUSTOMER = 1;
    private String id, name, roomId;
    private Long duration;

    public Customer(String name, String roomId, Long duration) {
        this.id = "KH" + String.format("%02d", NUM_CUSTOMER++);
        this.name = name;
        this.roomId = roomId;
        this.duration = duration;
    }

    public Long getDuration() {
        return duration;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + roomId + " " + duration;
    }

    @Override
    public int compareTo(Customer other) {
        return -duration.compareTo(other.getDuration());
    }
}

public class J07046_DanhSachLuuTru {

    public static void main(String[] args) throws IOException, ParseException {
        Scanner sc = new Scanner(new File("KHACH.in"));
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        int n = Integer.parseInt(sc.nextLine());
        List<Customer> ds = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String roomId = sc.nextLine();
            Date startDay = sdf.parse(sc.nextLine());
            Date lastDay = sdf.parse(sc.nextLine());
            Long duration = (lastDay.getTime() - startDay.getTime()) / (1000L * 60 * 60 * 24); // convert second -> day
            ds.add(new Customer(name, roomId, duration));
        }
        Collections.sort(ds);
        ds.forEach(System.out::println);
    }
}

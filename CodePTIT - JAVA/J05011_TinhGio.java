/* Author: NgTienHungg */

import java.util.Arrays;
import java.util.Scanner;

class Player implements Comparable<Player> {

    public String id, name, timeIn, timeOut;
    public int time;

    public Player(String id, String name, String timeIn, String timeOut) {
        this.id = id;
        this.name = name;
        this.time = 60 * (Integer.parseInt(timeOut.substring(0, 2)) - Integer.parseInt(timeIn.substring(0, 2)))
                + (Integer.parseInt(timeOut.substring(3)) - Integer.parseInt(timeIn.substring(3)));
    }

    public String getTime() {
        int h = time / 60;
        int m = time % 60;
        return String.format("%d gio %d phut", h, m);
    }

    @Override
    public String toString() {
        return id + " " + name + " " + getTime();
    }

    @Override
    public int compareTo(Player o) {
        return -(this.time - o.time);
    }
}

public class J05011_TinhGio {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        Player[] list = new Player[n];
        for (int i = 0; i < n; i++) {
            String id = sc.nextLine();
            String name = sc.nextLine();
            String timeIn = sc.nextLine();
            String timeOut = sc.nextLine();
            list[i] = new Player(id, name, timeIn, timeOut);
        }

        Arrays.sort(list);
        for (Player e : list) {
            System.out.println(e);
        }
    }
}

//3
//01T
//Nguyen Van An
//09:00
//10:30
//06T
//Hoang Van Nam
//15:30
//18:00
//02I
//Tran Hoa Binh
//09:05
//10:00

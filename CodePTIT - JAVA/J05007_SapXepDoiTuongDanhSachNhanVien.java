/* Author: NgTienHungg */

 /* Author: NgTienHungg */
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Scanner;

class NhanVien implements Comparable<NhanVien> {

    public static int NUM = 1;
    public String maNhanVien, hoTen, gioiTinh, diaChi, maSoThue;
    public Date ngaySinh, ngayKyHopDong;

    public NhanVien(String hoTen, String gioiTinh, Date ngaySinh, String diaChi, String maSoThue, Date ngayKyHopDong) {
        this.maNhanVien = String.format("%05d", NUM++);
        this.hoTen = hoTen;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.maSoThue = maSoThue;
        this.ngayKyHopDong = ngayKyHopDong;
    }

    public String formatDate(Date date) {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        return sdf.format(date);
    }

    @Override
    public String toString() {
        return maNhanVien + " " + hoTen + " " + gioiTinh + " " + formatDate(ngaySinh) + " " + diaChi + " " + maSoThue + " " + formatDate(ngayKyHopDong);
    }

    @Override
    public int compareTo(NhanVien o) {
        return this.ngaySinh.compareTo(o.ngaySinh);
    }
}

public class J05007_SapXepDoiTuongDanhSachNhanVien {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<NhanVien> ds = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String hoTen = sc.nextLine();
            String gioiTinh = sc.nextLine();
            Date ngaySinh = sdf.parse(sc.nextLine());
            String diaChi = sc.nextLine();
            String maSoThue = sc.nextLine();
            Date ngayKyHopDong = sdf.parse(sc.nextLine());
            ds.add(new NhanVien(hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong));
        }

        Collections.sort(ds);
        for (NhanVien nv : ds) {
            System.out.println(nv);
        }
    }
}

//3
//Nguyen Van A
//Nam
//22/10/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//15/10/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011

/* Author: NgTienHungg */

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

class NhanVien {

    public static int NUM = 1;
    public String maNhanVien, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong;

    public NhanVien(String hoTen, String gioiTinh, String ngaySinh, String diaChi, String maSoThue, String ngayKyHopDong) {
        this.maNhanVien = String.format("%05d", NUM++);
        this.hoTen = hoTen;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.maSoThue = maSoThue;
        this.ngayKyHopDong = ngayKyHopDong;
    }

    @Override
    public String toString() {
        return maNhanVien + " " + hoTen + " " + gioiTinh + " " + ngaySinh + " " + diaChi + " " + maSoThue + " " + ngayKyHopDong;
    }
}

public class J05006_DanhSachDoiTuongNhanVien {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        int n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            String hoTen = sc.nextLine();
            String gioiTinh = sc.nextLine();
            String ngaySinh = sdf.format(sdf.parse(sc.nextLine()));
            String diaChi = sc.nextLine();
            String maSoThue = sc.nextLine();
            String ngayKyHopDong = sdf.format(sdf.parse(sc.nextLine()));
            NhanVien nv = new NhanVien(hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong);
            System.out.println(nv);
        }
    }
}

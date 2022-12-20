/* Author: NgTienHungg */
package J05066;

public class Staff implements Comparable<Staff> {

    private String id;
    private String name;
    private String chucVu;
    private String heSoLuong;
    private String soHieu;

    public Staff(String id, String name) {
        this.id = id;
        this.name = name;

        chucVu = id.substring(0, 2);
        heSoLuong = id.substring(2, 4);
        soHieu = id.substring(4);

        checkID();
    }

    private void checkID() {
        if ((chucVu.equals("GD") && Integer.parseInt(soHieu) > 1) || (chucVu.equals("TP") && Integer.parseInt(soHieu) > 3) || (chucVu.equals("PP") && Integer.parseInt(soHieu) > 3)) {
            chucVu = "NV";
        }
    }

    public boolean isContains(String sub) {
        return name.toLowerCase().contains(sub);
    }

    @Override
    public int compareTo(Staff o) {
        if (this.heSoLuong.compareTo(o.heSoLuong) == 0) {
            return this.soHieu.compareTo(o.soHieu);
        }
        return -this.heSoLuong.compareTo(o.heSoLuong);
    }

    @Override
    public String toString() {
        return name + " " + chucVu + " " + soHieu + " " + heSoLuong;
    }
}

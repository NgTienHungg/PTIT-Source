// https://code.ptit.edu.vn/student/question/CPP0614
// DANH SÁCH ĐỐI TƯỢNG NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class NhanVien {
public:
    string mnv, ten, gtinh, nsinh, dchi, msthue, ngay;

    friend istream &operator >> (istream &is, NhanVien &a) {
        cin.ignore();
        getline(cin, a.ten);
        cin >> a.gtinh >> a.nsinh;
        cin.ignore();
        getline(cin, a.dchi);
        cin >> a.msthue >> a.ngay;
    
        // Chuẩn hóa mnv
        string s = to_string(stt++);
        while (s.length() < 5) {
            s = "0" + s;
        }
        a.mnv = s;
        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien a) {
        cout << a.mnv << " " << a.ten << " " << a.gtinh << " " << a.nsinh << " " << a.dchi << " " << a.msthue << " " << a.ngay << "\n";
        return os;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
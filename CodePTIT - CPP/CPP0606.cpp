// https://code.ptit.edu.vn/student/question/CPP0606
// KHAI BÁO LỚP NHÂN VIÊN

#include <bits/stdc++.h>
#define a() a
using namespace std;

class NhanVien {
public:
    string mnv, ten, gtinh, nsinh, dchi, mthue, ngay;

    friend istream &operator >> (istream &is, NhanVien &a) {
        a.mnv = "00001";
        getline(is, a.ten);
        is >> a.gtinh >> a.nsinh;
        is.ignore();
        getline(is, a.dchi);
        is >> a.mthue >> a.ngay;
        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien &a) {
        os << a.mnv << " " << a.ten << " " << a.gtinh << " " << a.nsinh << " " << a.dchi << " " << a.mthue << " " << a.ngay;
        return os;
    }
};

int main() {
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0601
// KHAI BÁO LỚP SINH VIÊN - 1

#include <bits/stdc++.h>
#define a() a;
using namespace std;

class SinhVien {
public:
    string msv, ten, lop, dob;
    float gpa;

    SinhVien() {};
};

void nhap(SinhVien &a) {
    a.msv = "B20DCCN001";
    getline(cin, a.ten);
    a.ten = "Nguyen Van A";
    cin >> a.lop >> a.dob >> a.gpa;
    if (a.dob[2] != '/') a.dob.insert(0, "0");
    if (a.dob[5] != '/') a.dob.insert(3, "0");
}

void in(SinhVien a) {
    cout << a.msv << " " << a.ten << " " << a.lop << " " << a.dob << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
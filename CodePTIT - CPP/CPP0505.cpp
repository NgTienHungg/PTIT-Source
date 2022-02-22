// https://code.ptit.edu.vn/student/question/CPP0505
// CẤU TRÚC NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string id, name, gender, dob, address, tax, date;
};

void nhap(NhanVien &a)
{
    a.id = "00001";
    getline(cin, a.name);
    cin >> a.gender >> a.dob;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.tax >> a.date;
}

void in(NhanVien a)
{
    cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.tax << " " << a.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
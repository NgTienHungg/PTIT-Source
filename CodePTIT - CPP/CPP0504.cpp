// https://code.ptit.edu.vn/student/question/CPP0504
// CẤU TRÚC SINH VIÊN

#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name, classs, msv, date;
    float gpa;
};

void nhap(SinhVien &a)
{
    a.msv = "B20DCCN001";
    getline(cin, a.name);
    cin >> a.classs >> a.date >> a.gpa;

    // Chuẩn hóa ngày sinh
    if (a.date.length() == 8)
        a.date = '0' + a.date.substr(0, 2) + '0' + a.date.substr(2);
    else if (a.date.length() == 9) {
        if (a.date[1] == '/')
            a.date = '0' + a.date;
        else
            a.date = a.date.substr(0, 3) + '0' + a.date.substr(3);
    }
}

void in(SinhVien a)
{
    cout << a.msv << " " << a.name << " " << a.classs << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main()
{
    SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
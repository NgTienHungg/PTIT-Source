// https://code.ptit.edu.vn/student/question/CPP0503
// CẤU TRÚC PHÂN SỐ

#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tu, mau;
};

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
    long long g = __gcd(p.tu, p.mau);
    p.tu /= g;
    p.mau /= g;
}

void in(PhanSo p)
{
    cout << p.tu << "/" << p.mau;
}

int main()
{
    PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
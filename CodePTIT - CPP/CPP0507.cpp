// https://code.ptit.edu.vn/student/question/CPP0507
// TÍNH TỔNG HAI PHÂN SỐ

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

PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo t;
    long long g = __gcd(p.mau, q.mau);
    long long l = p.mau * q.mau / g;
    t.tu = l / p.mau * p.tu + l / q.mau * q.tu;
    t.mau = l;
    rutgon(t);
    return t;
}

void in(PhanSo p)
{
    cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
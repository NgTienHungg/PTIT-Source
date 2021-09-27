// https://code.ptit.edu.vn/student/question/CPP0610
// TÍNH TỔNG HAI ĐỐI TƯỢNG PHÂN SỐ

#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    long long tu, mau;

public:
    PhanSo(long long t = 0, long long m = 1) {
        tu = t;
        mau = m;
    }

    void rutgon() {
        long long uc = __gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }

    friend istream &operator >> (istream &is, PhanSo &A) {
        return is >> A.tu >> A.mau;
    }

    friend ostream &operator << (ostream &os, PhanSo A) {
        return os << A.tu << "/" << A.mau;
    }

    PhanSo operator + (PhanSo B) {
        PhanSo A;
        A.tu = tu * B.mau + B.tu * mau;
        A.mau = mau * B.mau;
        A.rutgon();
        return A;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
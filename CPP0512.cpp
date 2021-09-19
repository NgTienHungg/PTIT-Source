// https://code.ptit.edu.vn/student/question/CPP0512
// PHÉP TOÁN VỚI PHÂN SỐ

#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

void rutGon(PhanSo &A) {
    long long g = __gcd(A.tu, A.mau);
    A.tu /= g;
    A.mau /= g;
}

PhanSo sum(PhanSo A, PhanSo B) {
    PhanSo C;
    long long g = __gcd(A.mau, B.mau);
    long long l = A.mau * B.mau / g;
    C.tu = A.tu * l / A.mau + B.tu * l / B.mau;
    C.mau = l;
    rutGon(C);
    return C;
}

PhanSo mul(PhanSo A, PhanSo B) {
    PhanSo C;
    C.tu = A.tu * B.tu;
    C.mau = A.mau * B.mau;
    rutGon(C);
    return C;
}

void process(PhanSo A, PhanSo B) {
    PhanSo C = mul(sum(A, B), sum(A, B));
    PhanSo D = mul(mul(A, B), C);
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}

int main() {
	long long t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
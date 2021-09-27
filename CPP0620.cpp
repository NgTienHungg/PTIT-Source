// https://code.ptit.edu.vn/student/question/CPP0620
// SẮP XẾP SINH VIÊN THEO LỚP

#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string msv, ten, lop, email;

    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    if (a.lop == b.lop) return a.msv < b.msv;
    return a.lop < b.lop;
}

int main() {
    int n;
    cin >> n;
    SinhVien a[1000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}
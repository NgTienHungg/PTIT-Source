// https://code.ptit.edu.vn/student/question/CPP0622
// LIỆT KÊ SINH VIÊN THEO LỚP

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

int main() {
    int n;
    cin >> n;

    SinhVien a[1000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for (int i = 0; i < n; ++i) {
            if (a[i].lop == s)
                cout << a[i];
        }
    }
    return 0;
}
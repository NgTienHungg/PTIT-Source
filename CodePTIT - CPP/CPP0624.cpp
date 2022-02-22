// https://code.ptit.edu.vn/student/question/CPP0624
// LIỆT KÊ SINH VIÊN THEO NGÀNH

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

string solve(string s) {
    if (s == "Ke toan") return "KT";
    if (s == "Cong nghe thong tin") return "CN";
    if (s == "An toan thong tin") return "AT";
    if (s == "Vien thong") return "VT";
    if (s == "Dien tu") return "DT";
}

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
        scanf("\n");
        string s;
        getline(cin, s);

        string major = solve(s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (int i = 0; i < n; ++i) {
            if (major == "CN" || major == "AT") {
                if (a[i].msv[5] == major[0] && a[i].msv[6] == major[1] && a[i].lop[0] != 'E')
                    cout << a[i];
            }
            else {
                if (a[i].msv[5] == major[0] && a[i].msv[6] == major[1])
                    cout << a[i];
            }
        }
    }
    return 0;
}

// Vẫn có các sinh viên KT, ĐT, VT học lớp E
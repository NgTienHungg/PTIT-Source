// https://code.ptit.edu.vn/student/question/CPP0625
// SẮP XẾP DANH SÁCH GIẢNG VIÊN

#include <bits/stdc++.h>
using namespace std;

class GiangVien {
public:
    string mgv, hoTen, boMon, ten, mon;

    friend istream &operator >> (istream &is, GiangVien &a) {
        scanf("\n");
        getline(cin, a.hoTen);
        getline(cin, a.boMon);

        string s1;
        stringstream ss1(a.hoTen);
        while (ss1 >> s1) {
            a.ten = s1;
        }

        string s2, res = "";
        stringstream ss2(a.boMon);
        while (ss2 >> s2) {
            res += toupper(s2[0]);
        }
        a.mon = res;

        return is;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.mgv << " " << a.hoTen << " " << a.mon << "\n";
        return os;
    }
};

bool cmp(GiangVien a, GiangVien b) {
    if (a.ten == b.ten) return a.mgv < b.mgv;
    return a.ten < b.ten;
}

int main() {
    int n;
    cin >> n;
    GiangVien a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        a[i].mgv = "GV" + to_string(i + 1);
        if (i + 1 < 10) 
            a[i].mgv.insert(2, "0");
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}
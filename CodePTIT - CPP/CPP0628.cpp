// https://code.ptit.edu.vn/student/question/CPP0628
// DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 1

#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep {
public:
    string ma, ten;
    int sluong;

    friend istream &operator >> (istream &is, DoanhNghiep &a) {
        scanf("\n");
        getline(cin, a.ma);
        getline(cin, a.ten);
        cin >> a.sluong;
        return is;
    }

    friend ostream &operator << (ostream &os, DoanhNghiep a) {
        cout << a.ma << " " << a.ten << " " << a.sluong << "\n";
        return os;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if (a.sluong == b.sluong) return a.ma < b.ma;
    return a.sluong > b.sluong;
}

int main() {
    int n;
    cin >> n;
    DoanhNghiep a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0615
// SẮP XẾP DANH SÁCH ĐỐI TƯỢNG NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class NhanVien {
public:
    string mnv, ten, gtinh, dchi, msthue, ngay;
    int d, m, y;

    friend istream &operator >> (istream &is, NhanVien &a) {
        scanf("\n");
        getline(cin, a.ten);
        getline(cin, a.gtinh);
        scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);
        getline(cin, a.dchi);
        getline(cin, a.msthue);
        getline(cin, a.ngay);
    
        // Chuẩn hóa mnv
        string s = to_string(stt++);
        while (s.length() < 5) {
            s = "0" + s;
        }
        a.mnv = s;
        return is;
    }

    friend ostream &operator << (ostream &os, NhanVien a) {
        cout << a.mnv << " " << a.ten << " " << a.gtinh;
        printf(" %.2d/%.2d/%.4d ", a.m, a.d, a.y);
        cout << a.dchi << " " << a.msthue << " " << a.ngay << "\n";
        return os;
    }
};

bool cmp(NhanVien a, NhanVien b) {  
    if (a.y < b.y) return 1;
    if (a.y == b.y) {
        if (a.m < b.m) return 1;
        if (a.m == b.m)  {
            if (a.d < b.d) return 1;
        }
    }
    return 0;
}

void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
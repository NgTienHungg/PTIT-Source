// https://code.ptit.edu.vn/student/question/CPP0518
// SẮP XẾP DANH SÁCH NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

int stt = 1;

struct NhanVien
{
    string id, name, gender, address, tax, date;
    int d, m, y;
};

string STT(int i)
{
    string r = to_string(i);
    if (i < 10) r = "0000" + r;
    else r = "000" + r;
    return r;
}

bool cmp(NhanVien a, NhanVien b)
{
    if (a.y < b.y) return 1;
    if (a.y == b.y) {
        if (a.m < b.m) return 1;
        if (a.m == b.m) {
            if (a.d < b.d) return 1;
        }
    }
    return 0;
}

void nhap(NhanVien &a)
{
    a.id = STT(stt); stt++;
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gender);
    scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.date);
}

void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " ";
        printf("%.2d/%.2d/%.4d ", ds[i].m, ds[i].d, ds[i].y);
        cout << ds[i].address << " " << ds[i].tax << " " << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

//! Note: Ngày sinh nhập xuất theo định dạng mm/dd/yyyy
// https://code.ptit.edu.vn/student/question/CPP0517
// DANH SÁCH NHÂN VIÊN

#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string id, name, gender, dob, address, tax, date;
};

string STT(int i)
{
    string r = to_string(i);
    while (r.length() < 5)
        r = '0' + r;
    return r;
}

void nhap(NhanVien &a)
{
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.dob);
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.date);
}

void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        cout << STT(i + 1) << " ";
        cout << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
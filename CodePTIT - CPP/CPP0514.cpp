// https://code.ptit.edu.vn/student/question/CPP0514
// DANH SÁCH SINH VIÊN - 2

#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string msv, ten, lop;
    int d, m, y;
    float gpa;
};

string solveMSV(int i)
{
    string s = to_string(i);
    while (s.length() < 3)
        s = '0' + s;
    return "B20DCCN" + s;
}

void chuanHoa(string &str)
{
    string s, res = "";
    stringstream ss(str);
    while (ss >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        res += s + ' ';
    }
    res.pop_back();
    str = res;
}

void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        scanf("\n");
        ds[i].msv = solveMSV(i + 1);
        getline(cin, ds[i].ten);
        chuanHoa(ds[i].ten);
        getline(cin, ds[i].lop);
        scanf("%d/%d/%d %f", &ds[i].d, &ds[i].m, &ds[i].y, &ds[i].gpa);
    }
}

void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop;
        printf(" %.2d/%.2d/%.4d %.2f\n", ds[i].d, ds[i].m, ds[i].y, ds[i].gpa);
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
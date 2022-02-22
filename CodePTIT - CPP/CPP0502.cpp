// https://code.ptit.edu.vn/student/question/CPP0502
// CẤU TRÚC THÍ SINH

#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name, date;
    float d1, d2, d3, sum;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    cin >> A.date >> A.d1 >> A.d2 >> A.d3;
    A.sum = A.d1 + A.d2 + A.d3;
}

void in(ThiSinh A)
{
    cout << A.name << " " << A.date << " ";
    cout << fixed << setprecision(1) << A.sum;
}

int main()
{
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
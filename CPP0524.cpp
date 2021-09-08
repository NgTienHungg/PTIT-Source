// https://code.ptit.edu.vn/student/question/CPP0524
// BẢNG ĐIỂM THÀNH PHẦN - 1

#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string msv, name, lop;
    double d1, d2, d3;

    void input() {
        cin.ignore();
        getline(cin, msv);
        getline(cin, name);
        getline(cin, lop);
        cin >> d1 >> d2 >> d3;
    }

    void output() {
        cout << msv << " " << name << " " << lop << " ";
        cout << fixed << setprecision(1) << d1 << " " << d2 << " " << d3 << endl;
    }
};

bool cmp(Student a, Student b)
{
    return a.msv < b.msv;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; ++i) {
        a[i].input();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " ";
        a[i].output();
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0103
// TÍNH TỔNG PHÂN THỨC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double s = 0;
    for (int i = 1; i <= n; ++i)
        s += 1.0 / i;
    cout << setprecision(4) << fixed << s;
    return 0;
}
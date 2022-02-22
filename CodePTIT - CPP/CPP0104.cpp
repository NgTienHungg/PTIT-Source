// https://code.ptit.edu.vn/student/question/CPP0104
// TÍNH TỔNG GIAI THỪA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long t = 1, s = 0;
    for (int i = 1; i <= n; ++i)
    {
        t *= i;
        s += t;
    }
    cout << s;
    return 0;
}
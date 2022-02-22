// https://luyencode.net/problem/VL04
// VL04 - Tính tổng S = 1/2 + 1/3 + ... + 1/n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double s;
    for (int i = 2; i <= n; ++i)
        s += (double)1 / i;
    printf("%.4lf", s);
    return 0;
}
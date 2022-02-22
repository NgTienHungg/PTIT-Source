// https://luyencode.net/problem/VL09
// VL09 - Tính S = x + x^2/2! + ... + x^n/n!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    double res = 0, pow = 1, gt = 1;
    for (int i = 1; i <= n; ++i)
    {
        pow *= x;
        gt *= i;
        res += pow / gt;
    }
    printf("%.2lf", res);
    return 0;
}
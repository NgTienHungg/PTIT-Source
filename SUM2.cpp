// https://luyencode.net/problem/SUM2
// SUM2 - Tính tổng phiên bản 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; ++i)
        s += (long long)i * i;
    cout << s;
    return 0;
}
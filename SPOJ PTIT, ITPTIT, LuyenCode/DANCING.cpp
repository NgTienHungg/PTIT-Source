// https://luyencode.net/problem/DANCING
// DANCING - Văn nghệ chào mừng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h;
    cin >> h;
    long long x = 4 * h - 4;
    long long d = h * h - x;
    cout << x << " " << d;
    return 0;
}

// Số người áo xanh = (2*h-1 + 1) + 2 * (h - 2) = 4 * h - 4
// Tổng số người = (2*h-1 + 1) * h / 2 = h * h
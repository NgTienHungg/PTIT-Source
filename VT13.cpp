// https://luyencode.net/problem/VT13
// VT13 - Đi tìm cặp đôi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    a[n] = a[0];
    int x, y, sum = -1e9;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] + a[i + 1] >= sum)
        {
            x = a[i];
            y = a[i + 1];
            sum = x + y;
        }
    }
    cout << x << " " << y;
    return 0;
}
// https://luyencode.net/problem/VT08
// VT08 - Biến đổi mảng 1 chiều

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            continue;
        int x, y;
        x = a[i - 1];
        if (i == n - 1)
            y = 0;
        else
            y = a[i + 1];
        a[i] += abs(x - y);
    }
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}
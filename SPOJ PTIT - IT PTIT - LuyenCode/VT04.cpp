// https://luyencode.net/problem/VT04
// VT04 - Tìm kiếm trong mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    bool ok = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == x)
            ok = 1;
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
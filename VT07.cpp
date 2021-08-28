// https://luyencode.net/problem/VT07
// VT07 - Vẫn là tìm kiếm trong mảng

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; ++i)
        cin >> a[i];
    int x;
    cin >> x;
    bool ok = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (a[i] == x)
        {
            ok = 1;
            cout << i + 1 << " ";
        }
    }
    if (!ok)
        cout << -1;
    return 0;
}
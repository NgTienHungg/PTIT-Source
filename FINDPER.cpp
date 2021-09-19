// https://luyencode.net/problem/FINDPER
// FINDPER - Biến đổi dãy số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    if (n % 2 == 0)
    {
        for (int i = n; i >= 2; i -= 2)
            cout << a[i] << " ";
        for (int i = 1; i < n; i += 2)
            cout << a[i] << " ";
    }
    else
    {
        for (int i = n; i >= 1; i -= 2)
            cout << a[i] << " ";
        for (int i = 2; i < n; i += 2)
            cout << a[i] << " ";
    }
    return 0;
}
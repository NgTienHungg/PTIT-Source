// https://luyencode.net/problem/WOSUB
// WOSUB - Đoạn con thách đố

#include <bits/stdc++.h>
using namespace std;

int Find(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n, s;
    cin >> n;
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    cin >> s;

    int res = -1;
    for (int i = 1; i < n; ++i)
    {
        int x = a[i] + s;
        if (x > a[n])
            break;
        int pos = Find(a, i + 1, n, x);
        if (pos != -1)
            res = max(res, pos - i); // pos-i là độ dài của dãy con t/m
    }
    cout << res;
    return 0;
}
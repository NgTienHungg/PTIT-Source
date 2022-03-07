// https://luyencode.net/problem/SEARCH1
// SEARCH1 - Tìm kiếm nhị phân 1

#include <bits/stdc++.h>
using namespace std;

bool bs(int a[], int l, int r, int k)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
            return 1;
        else if (a[m] > k)
            r = m - 1;
        else
            l = m + 1;
    }
    return 0;
}

int main()
{
    int m, n;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < m; i++)
    {
        if (bs(a, 0, n - 1, b[i]))
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}
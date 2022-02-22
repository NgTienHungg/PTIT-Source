// https://www.spoj.com/PTIT/problems/SSAM219J/
// SSAM219J - DÃY CON LIÊN TIẾP TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool binarySearch(LL a[], int l, int r, LL x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return 1;
        if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return 0;
}

void solve()
{
    LL n, k;
    cin >> n >> k;
    LL a[100001];
    a[0] = 0LL;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 0; i <= n; ++i)
    {
        if (a[i] + k > a[n])
        {
            cout << "NO\n";
            return;
        }
        if (binarySearch(a, i + 1, n, a[i] + k))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
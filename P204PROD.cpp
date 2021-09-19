// https://www.spoj.com/PTIT/problems/P204PROD/
// P204PROD - DÃY SỐ TỔNG LẺ

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (odd == 0)
        cout << "NO\n";
    else if (odd % 2 != 0)
        cout << "YES\n";
    else if (odd % 2 == 0)
    {
        if (even > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
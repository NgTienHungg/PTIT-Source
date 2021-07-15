// https://codeforces.com/contest/1520/problem/C
// C. Not Adjacent Matrix

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    int a[105][105];
    int gt = 1;
    for (int i = 1; i <= n; i++)
        a[i][i] = gt++;
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
            a[j - i + 1][j] = gt++;
        for (int j = i; j <= n; j++)
            a[j][j - i + 1] = gt++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
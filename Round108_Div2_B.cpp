// https://codeforces.com/contest/1519/problem/B
// B. The Cake Is a Lie

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int d = 0;
    for (int i = 2; i <= m; i++)
        d += 1;
    for (int i = 2; i <= n; i++)
        d += m;
    if (d == k)
        cout << "YES\n";
    else
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
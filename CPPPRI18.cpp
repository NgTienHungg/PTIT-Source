// https://www.spoj.com/PTIT/problems/CPPPRI18/
// CPPPRI18 - PRIME 18

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    int d = 0;
    for (int i = m; i <= n; i++)
        if (i % a == 0 || i % b == 0)
            d++;
    cout << d << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
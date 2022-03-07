// https://www.spoj.com/PTIT/problems/CPPMOD02/
// CPPMOD02 - MODULO 2

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, m;
    cin >> a >> m;
    for (int i = 1; i < m; i++)
    {
        if (a * i % m == 0)
        {
            cout << "-1\n";
            return;
        }
        if (i * a % m == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
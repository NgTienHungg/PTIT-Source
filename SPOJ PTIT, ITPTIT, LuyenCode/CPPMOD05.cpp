// https://www.spoj.com/PTIT/problems/CPPMOD05/
// CPPMOD05 - MODULO 5

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string n;
    ll m;
    cin >> n >> m;
    ll res = 0;
    for (int i = 0; i < n.length(); i++)
    {
        res = res * 10 + (n[i] - '0');
        res %= m;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
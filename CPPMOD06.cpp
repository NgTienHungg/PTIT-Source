// https://www.spoj.com/PTIT/problems/CPPMOD06/
// CPPMOD06 - MODULO 6

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll POW(ll x, ll y, ll z)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    if (y % 2 == 0)
        return POW(x * x % z, y / 2, z) % z;
    return (x % z) * POW(x * x % z, (y - 1) / 2, z) % z;
}

ll MOD(string a, ll m)
{
    ll res = 0;
    for (int i = 0; i < a.length(); i++)
    {
        res = res * 10 + (a[i] - '0');
        res %= m;
    }
    return res;
}

void solve()
{
    string a;
    ll b, m;
    cin >> a >> b >> m;
    ll q = MOD(a, m);
    ll ans = POW(q, b, m);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
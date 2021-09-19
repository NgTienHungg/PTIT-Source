// https://www.spoj.com/PTIT/problems/P154PROA/
// P154PROA - ROUND 4A - Lũy thừa 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Nhan(ll n, ll m, ll k)
{
    if (m == 0)
        return 0;
    if (m % 2 == 0)
        return Nhan((n * 2) % k, m / 2, k) % k;
    return (Nhan(n % k, m - 1, k) % k + n % k) % k;
}

ll LuyThua(ll n, ll m, ll k)
{
    if (m == 0)
        return 1;
    ll p = LuyThua(n, m / 2, k);
    ll res = Nhan(p, p, k);
    if (m % 2 == 0)
        return res;
    return Nhan(res, n, k) % k;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    cout << LuyThua(n, m, k) % k << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

//todo: Chia để trị
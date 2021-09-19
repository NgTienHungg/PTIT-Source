// https://www.spoj.com/PTIT/problems/CPPLCM07/
// CPPLCM07 - LCM & GCD 7

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b)
{
    while (b > 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    ll x, y, z, n;
    cin >> x >> y >> z >> n;
    ll LCM_xy = x * y / GCD(x, y);
    ll LCM_xyz = LCM_xy * z / GCD(LCM_xy, z);
    ll l = pow(10, n - 1);
    ll r = pow(10, n);
    if (LCM_xyz >= r)
        cout << "-1\n";
    else if (l % LCM_xyz == 0)
        cout << l << endl;
    else
        cout << (l / LCM_xyz + 1) * LCM_xyz << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
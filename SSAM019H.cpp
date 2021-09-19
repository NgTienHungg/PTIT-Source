// https://www.spoj.com/PTIT/problems/SSAM019H/
// SSAM019H - SỐ FIBONACCI THỨ N

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int n;
ll f[2][2]; // Ma trận fibonacci với f[0][0] là số fibonacci thứ n
ll d[2][2]; // Ma trận đơn vị

void init()
{
    cin >> n;

    f[0][0] = f[0][1] = f[1][0] = 1;
    f[1][1] = 0;

    d[0][0] = d[0][1] = d[1][0] = 1;
    d[1][1] = 0;
}

void Mul(ll f[2][2], ll d[2][2])
{
    ll x = (f[0][0] * d[0][0] % mod + f[0][1] * d[1][0] % mod) % mod;
    ll y = (f[0][0] * d[0][1] % mod + f[0][1] * d[1][1] % mod) % mod;
    ll z = (f[1][0] * d[0][0] % mod + f[1][1] * d[1][0] % mod) % mod;
    ll t = (f[1][0] * d[0][1] % mod + f[1][1] * d[1][1] % mod) % mod;

    f[0][0] = x;
    f[0][1] = y;
    f[1][0] = z;
    f[1][1] = t;
}

void Pow(ll f[2][2], ll n)
{
    if (n <= 1)
        return;
    Pow(f, n / 2);
    Mul(f, f);
    if (n & 1)
        Mul(f, d);
}

void solve()
{
    Pow(f, n - 1);
    cout << f[0][0];
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        init();
        solve();
    }
    return 0;
}
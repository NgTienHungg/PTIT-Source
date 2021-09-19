// https://www.spoj.com/PTIT/problems/CPPLCM03/
// CPPLCM03 - LCM & GCD 3

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

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
    int n;
    cin >> n;
    ll a[100];
    ll h = 1, g;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i == 1)
            g = a[1];
        h = (h * a[i]) % mod;
        g = GCD(g, a[i]) % mod;
    }
    ll ans = 1;
    for (int i = 1; i <= g; i++)
        ans = (ans * h) % mod;
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
// https://www.spoj.com/PTIT/problems/CPPLCM02/
// CPPLCM02 - LCM & GCD 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b)
{
    while (b != 0)
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
    ll res = 1;
    for (int i = 2; i <= n; i++)
    {
        ll uoc = GCD(res, i);
        res = res * i / uoc;
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
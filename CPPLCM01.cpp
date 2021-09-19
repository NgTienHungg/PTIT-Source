// https://www.spoj.com/PTIT/problems/CPPLCM01/
// CPPLCM01 - LCM & GCD 1

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

ll LCM(ll a, ll b)
{
    return (a * b) / GCD(a, b);
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << LCM(a, b) << " " << GCD(a, b) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
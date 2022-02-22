// https://www.spoj.com/PTIT/problems/P155PROA/
// P155PROA - ROUND 5A - Dãy số Fibonacci 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main()
{
    ll a, n;
    cin >> a >> n;
    int f[n + 1];
    f[1] = f[2] = 1;
    for (ll i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        sum += a * f[i];
        sum %= mod;
    }
    cout << sum;
    return 0;
}
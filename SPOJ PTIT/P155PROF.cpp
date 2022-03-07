// https://www.spoj.com/PTIT/problems/P155PROF/
// P155PROF - ROUND 5F - Dãy số Fibonacci 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

ll solve(ll x, ll y, ll n)
{
    if (n % 6 == 0)
        return (x - y) % mod;
    if (n % 6 == 1)
        return x % mod;
    if (n % 6 == 2)
        return y % mod;
    if (n % 6 == 3)
        return (y - x) % mod;
    if (n % 6 == 4)
        return (-x) % mod;
    if (n % 6 == 5)
        return (-y) % mod;
}

int main()
{
    ll x, y, n;
    cin >> x >> y >> n;
    ll kq = solve(x, y, n);
    if (kq >= 0)
        cout << kq;
    else
        cout << kq + mod;
    return 0;
}

/*
f1 = x
f2 = y
f3 = y - x
f4 = - x
f5 = - y
f6 = x - y
f7 = x
f8 = y
... Lặp lại
*/
// https://luyencode.net/problem/POWER1
// POWER1 - Tính lũy thừa 1

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

ll Mul(ll a, ll b)
{
    if (b == 0)
        return 0;
    if (b == 1)
        return a;
    ll tmp = Mul(a, b / 2);
    ll res = tmp + tmp;
    if (b & 1)
        return (res + a) % mod;
    return res % mod;
}

ll Pow(ll n, ll k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    ll tmp = Pow(n, k / 2);
    ll res = Mul(tmp, tmp);
    if (k & 1)
        return (res * n) % mod;
    return res % mod;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    cout << Pow(n, k);
    return 0;
}
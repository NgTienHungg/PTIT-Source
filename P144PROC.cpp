// https://www.spoj.com/PTIT/problems/P144PROC/
// P144PROC - ROUND 4C - Lũy thừa

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll Mul(ll a, ll b)
{
    if (b == 0)
        return 0ll;
    ll tmp = Mul(a, b / 2);
    if (b % 2 == 0)
        return (tmp * 2) % mod;
    return (tmp * 2 + a) % mod;
}

ll Pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;
    ll tmp = Pow(a, b / 2);
    if (b % 2 == 0)
        return Mul(tmp, tmp) % mod;
    return (Mul(tmp, tmp) * a) % mod;
}

int main()
{
    ll a, b;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << Pow(a, b) << endl;
    }
    return 0;
}
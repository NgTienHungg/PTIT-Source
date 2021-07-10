/*
A. [ProPTIT-Algorithm-Divide and Conquer] Luỹ thừa

Cho số nguyên dương N và K. Hãy tính N^K modulo 10^9+7.

Input
Dòng đầu tiên là số lượng bộ test T (T≤20).
Mỗi test gồm 1 số nguyên N và K (1≤N≤1000,1≤K≤1e9).

Output
Với mỗi test, in ra đáp án trên một dòng.

Example

input
2
2 3
4 2

output
8
16
*/

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
    ll res = 2 * tmp;
    if (b & 1)
        return (a + res) % mod;
    return res % mod;
}

ll Pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll tmp = Pow(a, b / 2);
    ll res = Mul(tmp, tmp);
    if (b & 1)
        return a * res % mod;
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << Pow(n, k) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

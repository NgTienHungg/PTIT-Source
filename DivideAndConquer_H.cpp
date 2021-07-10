/*
H. [ProPTIT-Algorithm-Divide and Conquer] Số fibonacci thứ n

Dãy số Fibonacci được xác định bằng công thức như sau:
F[0] = 0, F[1] = 1;
F[n] = F[n-1] + F[n-2] với mọi n >= 2.
Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...
Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 1e9+7.

Input
Dòng đầu tiên là số lượng bộ test T (T≤1000).
Mỗi test bắt gồm một số nguyên N (1≤N≤1e9).

Output
Với mỗi test, in ra đáp án trên một dòng.

Example

input
3
2
6
20

output
1
8
6765
*/

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
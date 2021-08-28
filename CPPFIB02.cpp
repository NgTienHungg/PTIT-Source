// https://www.spoj.com/PTIT/problems/CPPFIB02/
// CPPFIB02 - FIBONACCI 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> f(1e6 + 1, 0);
void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1e6; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

void solve()
{
    ll n;
    cin >> n;
    bool kt = 0;
    for (int i = 0; i < f.size(); i++)
    {
        if (f[i] == n)
        {
            kt = 1;
            break;
        }
    }
    if (kt == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fibo();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// 0 <= n < 1e18
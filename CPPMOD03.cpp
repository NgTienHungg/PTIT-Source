// https://www.spoj.com/PTIT/problems/CPPMOD03/
// CPPMOD03 - MODULO 3

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll s = 0;
    for (int i = 1; i <= n; i++)
        s += i % k;
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
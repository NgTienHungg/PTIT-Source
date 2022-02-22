// https://www.spoj.com/PTIT/problems/CPPMOD04/
// CPPMOD04 - MODULO 4

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i % k;
    if (s == k)
        cout << "1\n";
    else
        cout << "0\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
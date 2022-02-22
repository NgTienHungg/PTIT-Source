// https://www.spoj.com/PTIT/problems/CPPMOD11/
// CPPMOD11 - MODULO 11

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    a %= c;
    b %= c;
    cout << (a * b) % c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
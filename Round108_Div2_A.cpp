// https://codeforces.com/contest/1519/problem/A
// A. Red and Blue Beans

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll r, b, d;
    cin >> r >> b >> d;
    if (d * min(r, b) >= abs(r - b))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
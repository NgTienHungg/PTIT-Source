// https://www.spoj.com/PTIT/problems/PTIT018C/
// PTIT018C - ACM PTIT 2018 C - SỐ MŨ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solveString(string a, int m)
{
    ll res = 0;
    for (ll i = 0; i < a.length(); i++)
    {
        res = res * 10 + (a[i] - '0');
        res %= m;
    }
    return res;
}

void solve()
{
    string a;
    int b, m;
    cin >> a >> b >> m;
    ll tmp = solveString(a, m);
    ll res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= tmp;
        res %= m;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
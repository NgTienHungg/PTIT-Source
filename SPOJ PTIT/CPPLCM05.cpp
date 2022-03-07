// https://www.spoj.com/PTIT/problems/CPPLCM05/
// CPPLCM05 - LCM & GCD 5

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b)
{
    while (b)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    ll a, x, y;
    cin >> a >> x >> y;
    for (int i = 1; i <= GCD(x, y); i++)
        cout << a;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

//todo: Tìm ucln của x, y rồi in ra bấy nhiêu lần số a
// https://www.spoj.com/PTIT/problems/P166SUMG/
// P166SUMG - ROUND 6G - Enchantress

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    
    if (a == 0 && (b == 0 || c == 0))
    {
        cout << "NO\n";
        return;
    }

    int d = abs(b - c);
    if (d % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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
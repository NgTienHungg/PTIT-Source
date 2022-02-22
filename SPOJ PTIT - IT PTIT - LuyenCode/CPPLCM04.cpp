// https://www.spoj.com/PTIT/problems/CPPLCM04/
// CPPLCM04 - LCM & GCD 4

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ucln(ll a, string b)
{
    int ans = 0;
    for (int i = 0; i < b.length(); i++)
    {
        ans = ans * 10 + (b[i] - '0');
        ans %= a;
    }
    return ans;
}

void solve()
{
    ll a;
    string b;
    cin >> a >> b;
    ll max = 0;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            ll x = a / i;
            if (ucln(x, b) == 0)
            {
                cout << x << endl;
                return;
            }
            if (ucln(i, b) == 0)
                max = i;
        }
    }
    cout << max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
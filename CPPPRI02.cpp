// https://www.spoj.com/PTIT/problems/CPPPRI02/
// CPPPRI02 - PRIME 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ktnt(ll n)
{
    if (n < 2)
        return 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
    ll n;
    cin >> n;
    ll max = 2;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (ktnt(i) == 1)
                max = i;
            if (ktnt(n / i) == 1)
            {
                max = n / i;
                break;
            }
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
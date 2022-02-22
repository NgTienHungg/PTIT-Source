// https://www.spoj.com/PTIT/problems/SUMDIV/
// SUMDIV - Tổng ước

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ktcp(ll n)
{
    ll x = sqrt(n);
    if (x * x == n)
        return 1;
    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            sum += n / i;
        }
    }
    if (ktcp(n) == 1)
        sum -= sqrt(n);
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
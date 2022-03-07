// https://www.spoj.com/PTIT/problems/PTIT017H/
// PTIT017H - ACM PTIT 2017 H - SỐ ĐẶC BIỆT HOÀN HẢO

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumDiv(ll n)
{
    ll sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
            if (i * i == n)
                sum -= i;
        }
    }
    return sum;
}

void solve()
{
    ll n;
    cin >> n;
    ll x = sumDiv(n);
    if (sumDiv(x) == 2 * n)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
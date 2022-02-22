// https://www.spoj.com/PTIT/problems/CPPLCM06/
// CPPLCM06 - LCM & GCD 6

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b)
{
    while (b > 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll sum = (n + 1) * n / 2;
    ll a = (sum + m) / 2;
    ll b = sum - a;
    // Không thể chia thành 2 nhóm có hiệu = m
    if (a * 2 != sum + m)
        cout << "No\n";
    // Số co-prime
    else if (GCD(a, b) == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
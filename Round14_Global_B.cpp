// https://codeforces.com/contest/1515/problem/B
// B. Phoenix and Puzzle

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[50];

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (a[i] > n)
            break;
        if (n % a[i] == 0)
        {
            ll count = n / a[i];
            ll x = sqrt(count);
            if (x * x == count)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i <= 30; i++)
        a[i] = pow(2, i);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
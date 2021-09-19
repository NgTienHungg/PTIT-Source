// https://www.spoj.com/PTIT/problems/CPPREA09/
// CPPREA09 - Re-arrang Array 9

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    ll ans[n]; // ans = answer
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans[i] = a[0] * a[1];
        else if (i == n - 1)
            ans[i] = a[n - 1] * a[n - 2];
        else
            ans[i] = a[i - 1] * a[i + 1];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
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
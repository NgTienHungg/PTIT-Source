// https://www.spoj.com/PTIT/problems/CPPREA01/
// CPPREA01 - Re-arrang Array 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<bool> v(1e7 + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 0 && x <= 1e7)
            v[x] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            cout << -1 << " ";
        else
            cout << i << " ";
    }
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
// https://www.spoj.com/PTIT/problems/P176PROH/
// P176PROH - ROUND 6H - Bạn bè

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    vector<ll> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << ll(v[2] - v[0]) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
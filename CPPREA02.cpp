// https://www.spoj.com/PTIT/problems/CPPREA02/
// CPPREA02 - Re-arrang Array 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> a = {};
    vector<ll> b = {};
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] != 0)
            a.push_back(v[i]);
        else
            b.push_back(v[i]);
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
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
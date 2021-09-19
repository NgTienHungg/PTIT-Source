// https://www.spoj.com/PTIT/problems/CPPREA05/
// CPPREA05 - Re-arrang Array 5

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.rbegin(), v.rend());
    vector<int> lon = v;
    lon.resize(n / 2);

    sort(v.begin(), v.end());
    vector<int> nho = v;
    nho.resize(n - n / 2);

    for (int i = 0; i < lon.size(); i++)
        cout << lon[i] << " " << nho[i] << " ";
    if (nho.size() > lon.size())
        cout << nho[n / 2];
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
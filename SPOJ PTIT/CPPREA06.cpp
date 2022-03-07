// https://www.spoj.com/PTIT/problems/CPPREA06/
// CPPREA06 - Re-arrang Array 6

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
        if (v[i + 1] != 0 && v[i] == v[i + 1])
        {
            v[i] *= 2;
            v[i + 1] = 0;
        }
    vector<int> a = {};
    vector<int> b = {};
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
            a.push_back(v[i]);
        else
            b.push_back(0);
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << ' ';
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
// https://www.spoj.com/PTIT/problems/CPPCOM01/
// CPPCOM01 - COMINATION 1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < pow(2, i); j++)
            v.push_back(v[j]);
        for (int j = 0; j < pow(2, i); j++)
            v[j] = "0" + v[j];
        for (int j = pow(2, i); j < pow(2, i + 1); j++)
            v[j] = "1" + v[j];
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
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
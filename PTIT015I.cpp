// https://www.spoj.com/PTIT/problems/PTIT015I/
// PTIT015I - ACM PTIT 2015 I - Hàng đợi tác vụ

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    cin >> v[0];
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > t)
        {
            cout << i << endl;
            break;
        }
        if (i == n - 1)
            cout << n << endl;
    }
}

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        solve();
    }
    return 0;
}
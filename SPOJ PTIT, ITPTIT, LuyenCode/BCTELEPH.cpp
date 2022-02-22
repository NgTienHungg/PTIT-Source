// https://www.spoj.com/PTIT/problems/BCTELEPH/
// BCTELEPH - Danh sách điện thoại nhất quán

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i + 1 < n; ++i)
    {
        string temp = a[i + 1].substr(0, a[i].length());
        if (a[i] == temp)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
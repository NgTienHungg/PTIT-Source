// https://www.spoj.com/PTIT/problems/P17QPROB/
// P17QPROB - QUALIFY ROUND 2017 B - GHÉP XÂU

#include <bits/stdc++.h>
using namespace std;

struct Data
{
    string s;
};

bool cmp(Data a, Data b)
{
    if (a.s + b.s < b.s + a.s)
        return 1;
    return 0;
}

void solve()
{
    int m;
    cin >> m;
    Data a[10];
    for (int i = 1; i <= m; i++)
        cin >> a[i].s;
    sort(a + 1, a + 1 + m, cmp);
    for (int i = 1; i <= m; i++)
        cout << a[i].s;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
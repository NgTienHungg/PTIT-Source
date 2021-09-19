// https://codeforces.com/contest/1529/problem/A
// A. Eshag Loves Big Arrays

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t, n;
int a[105];

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
}

void solve()
{
    int tmp = a[0];
    int d = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != tmp)
            d++;
    cout << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}
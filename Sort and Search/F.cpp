// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/F
// F. [ProPTIT-Algorithm-Sort and Search] Giao của ba dãy

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, n1, n2, n3;
ll a[10004], b[10004], c[10004];

void init()
{
    cin >> n1 >> n2 >> n3;

    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    for (int i = 0; i < n3; i++)
        cin >> c[i];
}

bool binarySearch(ll a[], int l, int r, ll k)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
            return 1;
        if (a[m] > k)
            r = m - 1;
        else
            l = m + 1;
    }
    return 0;
}

void solve()
{
    bool ok = 0;
    for (int i = 0; i < n1; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        if (binarySearch(b, 0, n2 - 1, a[i]))
            if (binarySearch(c, 0, n3 - 1, a[i]))
            {
                ok = 1;
                cout << a[i] << " ";
            }
    }
    if (!ok)
        cout << -1;
    cout << endl;
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
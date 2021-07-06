// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/H
// H. [ProPTIT-Algorithm-Sort and Search] Help Sudo

#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int n, x;
int a[1000006];

int binarySearch()
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

void init()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void solve()
{
    if (binarySearch() != -1)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    sort(a, a + n);
    solve();
    return 0;
}
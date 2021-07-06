// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/G
// G. [ProPTIT-Algorithm-Sort and Search] Sudo

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, n;
ll k, a[100005], f[100005];

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Mảng cộng dồn
    f[0] = a[0];
    for (int i = 1; i < n; i++)
        f[i] = f[i - 1] + a[i];
}

int binarySearch(ll a[], int l, int r, ll x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

void solve()
{
    for (int i = 0; i < n; i++)
    {
        if (f[i] == k)
        {
            for (int j = 0; j <= i; j++)
                cout << a[j] << " ";
            return;
        }
        if (f[i] > k)
        {
            int idx = binarySearch(f, 0, i - 1, f[i] - k);
            if (idx != -1)
            {
                for (int j = idx + 1; j <= i; j++)
                    cout << a[j] << " ";
                return;
            }
        }
    }
    cout << "NOT FOUND";
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
        cout << endl;
    }
    return 0;
}
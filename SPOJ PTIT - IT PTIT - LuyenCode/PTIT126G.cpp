// https://www.spoj.com/PTIT/problems/PTIT126G/
// PTIT126G - Đổi tiền

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> f(m + 1, 1e6);
    f[0] = 0;
    for (int i = 1; i <= m; ++i)
    {
        bool ok = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] <= i)
            {
                if (a[j] == i)
                {
                    f[i] = 1;
                    ok = 1;
                }
                else if (f[i - a[j]] + 1 < f[i] && f[i - a[j]] != 0)
                {
                    f[i] = f[i - a[j]] + 1;
                    ok = 1;
                }
            }
        }
        if (!ok)
            f[i] = 0;
    }
    f[m] == 0 ? cout << -1 : cout << f[m];
    return 0;
}
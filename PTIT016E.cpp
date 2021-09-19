// https://www.spoj.com/PTIT/problems/PTIT016E/
// PTIT016E - ACM PTIT 2016 E - Kỳ thi ACM/ICPC

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll a[n + 1][12];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 11; j++)
            cin >> a[i][j];
    }

    ll ans = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                ll tmp = 0;
                for (int u = 1; u <= 11; u++)
                    tmp += max(max(a[i][u], a[j][u]), a[k][u]);
                ans = max(ans, tmp);
            }
        }
    }
    cout << ans;
    return 0;
}
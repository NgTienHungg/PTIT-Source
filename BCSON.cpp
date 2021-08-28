// https://www.spoj.com/PTIT/problems/BCSON/
// BCSON - Sơn cột

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<ll>> v(m + 2, vector<ll>(n + 2, 0));
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> v[i][j];

    ll sum = m * n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            sum += max(0ll, v[i][j] - v[i][j + 1]);
            sum += max(0ll, v[i][j] - v[i][j - 1]);
            sum += max(0ll, v[i][j] - v[i + 1][j]);
            sum += max(0ll, v[i][j] - v[i - 1][j]);
        }

    cout << sum;
    return 0;
}
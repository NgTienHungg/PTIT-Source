// https://luyencode.net/problem/SUM5
// SUM5 - Tính tổng nghịch đảo

#include <bits/stdc++.h>
using namespace std;

double f[1000001] = {0};
void solve()
{
    for (int i = 1; i <= 1e6; ++i)
        f[i] = f[i - 1] + 1.0 / i;
}

int main()
{
    solve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << setprecision(5) << fixed << f[n] << endl;
    }
    return 0;
}
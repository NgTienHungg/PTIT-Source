// https://luyencode.net/problem/SUM6
// SUM6 - Tổng căn bậc hai lồng nhau

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    double r = 0;
    for (int i = 1; i <= n; ++i)
        r = sqrt(2 + r);
    cout << setprecision(5) << fixed << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
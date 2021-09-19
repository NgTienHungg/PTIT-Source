// https://luyencode.net/problem/SUM9
// SUM9 - Liên phân số

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    double r = 1;
    for (int i = 1; i <= n; ++i)
        r = 1.0 / (1 + r);
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
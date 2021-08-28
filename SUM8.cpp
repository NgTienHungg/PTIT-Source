// https://luyencode.net/problem/SUM8
// SUM8 - Tiếp tục là căn bậc 2 lồng nhau

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    double r = 0;
    for (int i = n; i >= 1; i--)
        r = sqrt(i + r);
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
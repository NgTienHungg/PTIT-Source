// https://luyencode.net/problem/POWER3
// POWER3 - Lũy thừa bậc 3

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    double x = pow(n, 1 / 3.0);
    long long y = (long long)x;
    if (y * y * y == n || (y + 1) * (y + 1) * (y + 1) == n)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
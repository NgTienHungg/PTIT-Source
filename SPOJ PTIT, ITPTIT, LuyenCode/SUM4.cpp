// https://luyencode.net/problem/SUM4
// SUM4 - Tính tổng phiên bản 4

#include <bits/stdc++.h>
using namespace std;

double solve(int n)
{
    return 2.0 * (1 - 1.0 / (n + 1));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << setprecision(8) << fixed << solve(n) << endl;
    }
    return 0;
}
// https://luyencode.net/problem/INVSUM
// INVSUM - Tính tổng nghịch đảo các số lẻ

#include <bits/stdc++.h>
using namespace std;

double f[1000001];
double solve(int n)
{
    if (n == 0)
        return 0;
    if (f[n] == 0)
        f[n] = solve(n - 1) + 1.0 / (2 * n - 1);
    return f[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << setprecision(5) << fixed << solve(n) << endl;
    }
    return 0;
}
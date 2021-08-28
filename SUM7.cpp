// https://luyencode.net/problem/SUM7
// SUM7 - Lại là căn bậc 2 lồng nhau

#include <bits/stdc++.h>
using namespace std;

double f[1000001];
double solve(int n)
{
    if (n == 0)
        return 0.0;
    if (f[n] == 0)
        f[n] = sqrt(solve(n - 1) + n);
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
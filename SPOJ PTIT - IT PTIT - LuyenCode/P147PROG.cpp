// https://www.spoj.com/PTIT/problems/P147PROG/
// P147PROG - ROUND 7G - Điểm cân bằng

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int t)
{
    int a[n][3];
    float M = 0, M_A = 0, M_B = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        M += a[i][2];
        M_A += a[i][2] * a[i][0];
        M_B += a[i][2] * a[i][1];
    }
    printf("Case %d: %.2f %.2f\n", t, M_A / M, M_B / M);
}

int main()
{
    int n;
    for (int t = 1;; t++)
    {
        cin >> n;
        if (n < 0)
            break;
        solve(n, t);
    }
    return 0;
}
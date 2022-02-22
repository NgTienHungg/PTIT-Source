// https://www.spoj.com/PTIT/problems/P165PROH/
// P165PROH - ROUND 5H - Tính chu vi

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a = sqrt(s1 * s2 / s3);
    int b = s1 / a;
    int h = s2 / a;
    cout << 4 * (a + b + h) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
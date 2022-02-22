// https://luyencode.net/problem/DCTDN1
// DCTDN1 - Dãy con tăng dài nhất (bản dễ)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int dp[n] = {1};
    for (int i = 1; i < n; ++i)
    {
        int maxx = 0;
        for (int j = 0; j < i; ++j)
        {
            if (a[j] < a[i] && dp[j] > maxx)
                maxx = dp[j];
        }
        dp[i] = maxx + 1;
    }
    cout << *max_element(dp, dp + n);
    return 0;
}
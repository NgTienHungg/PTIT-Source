// https://code.ptit.edu.vn/student/question/CPP0721
// DÃY CON TĂNG DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n + 1], dp[n + 1] = {0}, res = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
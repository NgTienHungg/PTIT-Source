// https://code.ptit.edu.vn/student/question/CPP0215
// TỔNG LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1]= {0}, b[m + 1] = {0};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= m; ++i) {
        cin >> b[i];
        b[i] += b[i - 1];
    }
    int res = 0;
    for (int i = 1; i <= min(n, m); ++i) {
        res = max(res, max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]));
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
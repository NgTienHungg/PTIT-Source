// https://code.ptit.edu.vn/student/question/CPP0272
// TÍNH TOÁN TRÊN DÃY SỐ

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

void TestCase()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long h = a[0], g = a[0];
    for (int i = 1; i < n; ++i) {
        h = h * a[i] % mod;
        g = __gcd(g, a[i]);
    }
    long long res = 1;
    for (int i = 1; i <= g; ++i) {
        res = res * h % mod;
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
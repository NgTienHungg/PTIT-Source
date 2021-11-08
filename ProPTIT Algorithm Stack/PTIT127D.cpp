// https://www.spoj.com/PTIT/problems/PTIT127D/
// PTIT127D - Chia kẹo 2

#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    long long m, n, sum = 0;
    cin >> m >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    sum -= m;
    long long ans = 0, size = n;
    for (int i = 0; i < n; ++i) {
        if (a[i] * size <= sum) {
            ans += a[i] * a[i];
            sum -= a[i];
            size--;
        }
        else  break;
    }
    long long x1 = sum / size, x2 = x1 + 1;
    long long sl2 = sum % size, sl1 = size - sl2;
    ans += sl1 * x1 * x1 + sl2 * x2 * x2;
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TestCase();
    return 0;
}
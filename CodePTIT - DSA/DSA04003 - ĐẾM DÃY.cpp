// https://code.ptit.edu.vn/student/question/DSA04003
// ĐẾM DÃY

#include <bits/stdc++.h>
using namespace std;

const int MOD = 123456789;

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

void testCase() {
    long long n; cin >> n;
    cout << poww(2, n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
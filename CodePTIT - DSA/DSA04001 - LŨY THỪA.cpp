// https://code.ptit.edu.vn/student/question/DSA04001
// LŨY THỪA

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    if (k == 1) return n;
    long long x = poww(n, k / 2);
    long long y = (x * x) % MOD;
    if (k % 2 == 0) return y;
    return (n * y) % MOD;
}

void testCase() {
    long long n, k;
    cin >> n >> k;
    cout << poww(n, k);
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
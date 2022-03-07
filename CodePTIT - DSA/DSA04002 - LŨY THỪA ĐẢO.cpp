// https://code.ptit.edu.vn/student/question/DSA04002
// LŨY THỪA ĐẢO

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

long long rev(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

void testCase() {
    long long n; cin >> n;
    long long r = rev(n);
    cout << poww(n, r);
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
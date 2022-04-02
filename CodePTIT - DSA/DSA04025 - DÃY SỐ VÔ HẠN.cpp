// https://code.ptit.edu.vn/student/question/DSA04025
// DÃY SỐ VÔ HẠN

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll const MOD = 1e9 + 7;

ll f[2][2], d[2][2];

void reset() {
    f[0][0] = f[0][1] = f[1][0] = 1; f[1][1] = 0;
    d[0][0] = d[0][1] = d[1][0] = 1; d[1][1] = 0;
}

void Mul(ll a[2][2], ll b[2][2]) {
    long long x = (a[0][0] * b[0][0] % MOD + a[0][1] * b[1][0] % MOD) % MOD;
    long long y = (a[0][0] * b[0][1] % MOD + a[0][1] * b[1][1] % MOD) % MOD;
    long long z = (a[1][0] * b[0][0] % MOD + a[1][1] * b[1][0] % MOD) % MOD;
    long long t = (a[1][0] * b[0][1] % MOD + a[1][1] * b[1][1] % MOD) % MOD;
    f[0][0] = x, f[0][1] = y, f[1][0] = z, f[1][1] = t;
}

void Pow(ll f[2][2], int n) {
    if (n <= 1) return;
    Pow(f, n / 2);
    Mul(f, f);
    if (n % 2 == 1) {
        Mul(f, d);
    }
}

void testCase() {
    int n; cin >> n;
    reset();
    Pow(f, n - 1);
    cout << f[0][0];
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
// https://www.spoj.com/PTIT/problems/CPPMOD08/
// CPPMOD08 - MODULO 8

#include <bits/stdc++.h>
using namespace std;

void Faster() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void TestCase() {
    long long n, p;
    cin >> n >> p;
    long long res = 0;
    for (long long i = 1; i < p; ++i) {
        if (i * i % p == 1) {
            long long maxx = i + p * (n / p);
            if (maxx > n)
                maxx -= p;
            res += (maxx - i) / p + 1;
        }
    }
    cout << res << endl;
}

int main() {
    Faster();
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
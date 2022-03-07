#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void solve() {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += a[i] * b[i];
    }
    if (isPrime(s)) {
        for (int i = 0; i < n; ++i) {
            if (b[i])
                cout << a[i] << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        b[i] = j;
        if (i == n - 1)
            solve();
        else
            Try(i + 1);
    }
}

void TestCase() {
    cin >> n;
    a.resize(n);
    b.resize(n, 0);
    for (auto &x : a) cin >> x;
    sort(a.rbegin(), a.rend());
    Try(0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
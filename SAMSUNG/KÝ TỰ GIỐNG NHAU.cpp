#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, in, de, co;
    cin >> n >> in >> de >> co;

    int f[101] = {0}; f[1] = in;
    for (int i = 2; i <= n; ++i) {
        if (i & 1)
            f[i] = min({f[i - 1] + in, f[i / 2] + co + in, f[(i + 1) / 2] + co + de});
        else
            f[i] = min(f[i - 1] + in, f[i / 2] + co);
    }
    cout << f[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}

// Test có TH n = 1
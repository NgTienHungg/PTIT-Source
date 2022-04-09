#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long p; cin >> p;
    if (p == 1) {
        cout << 1;
        return;
    }
    int d[10] = {};
    for (int i = 9; i >= 2; --i) {
        while (p % i == 0) {
            p /= i;
            d[i]++;
        }
    }
    if (p != 1) {
        cout << -1;
        return;
    }

    for (int i = 2; i <= 9; ++i) {
        for (int j = 1; j <= d[i]; ++j) {
            cout << i;
        }
    }
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
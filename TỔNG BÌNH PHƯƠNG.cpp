#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    int f[10001] = {0};
    for (int i = 1; i <= n; ++i) {
        f[i] = i;
        for (int j = 2; j <= sqrt(i); ++j) {
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }
    cout << f[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
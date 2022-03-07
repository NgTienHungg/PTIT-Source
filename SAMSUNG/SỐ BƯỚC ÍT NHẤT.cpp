#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int f[1001] = {0};
    for (int i = 1; i <= n; ++i) {
        f[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (a[j] <= a[i] && f[j] + 1 > f[i]) {
                f[i] = f[j] + 1;
            }
        }
    }
    int maxx = *max_element(f + 1, f + 1 + n);
    cout << n - maxx;
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
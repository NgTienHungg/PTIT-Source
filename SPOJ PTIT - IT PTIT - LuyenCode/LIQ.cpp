// LIQ - Dãy con tăng dài nhất ( bản dễ )

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int f[n + 1] = {0}, res = 0;
    for (int i = 1; i <= n; ++i) {
        f[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (a[i] > a[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
            res = max(res, f[i]);
        }
    }
    cout << res;
    return 0;
}
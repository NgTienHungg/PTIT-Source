#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k, a[1001] = {0};
    cin >> n >> k;
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }

    int i = k;
    while (i >= 1 && a[i] == a[i - 1] + 1) {
        i--;
    }
    if (i == 0) {
        for (int j = n - k + 1; j <= n; ++j) {
            cout << j << " ";
        }
    }
    else {
        a[i] -= 1;
        for (int j = 1; j <= i; ++j) {
            cout << a[j] << " ";
        }
        for (int j = i + 1; j <= k; ++j) {
            cout << n - k + j << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    float a[500], b[500];
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    int f[500] = {1};
    for (int i = 0; i < n; ++i) {
        f[i] = 1;
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j] && b[i] < b[j])
                f[i] = max(f[i], f[j] + 1);
        }
    }
    cout << *max_element(f, f + n);
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
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<float> a(n), b(n), f(n, 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j] && b[i] < b[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << *max_element(f.begin(), f.end());
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
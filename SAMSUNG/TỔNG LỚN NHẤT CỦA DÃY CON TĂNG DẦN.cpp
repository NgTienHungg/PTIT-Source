#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n), f(n);
    for(int &x : a) cin >> x;

    for (int i = 0; i < n; ++i) {
        f[i] = a[i];
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j])
                f[i] = max(f[i], f[j] + a[i]);
        }
    }
    cout << *max_element(f.begin(), f.end());
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
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, S;
    cin >> n >> S;
    vector<int> a(n), f(S + 1);
    for (int &x : a) cin >> x;

    f[0] = 1; // QHD
    for (int i = 0; i < n; ++i) {
        for (int j = S; j >= 1; --j) {
            if (j >= a[i] && f[j] == 0 && f[j - a[i]] == 1) {
                f[j] = 1;
            }
        }
    }
    cout << (f[S] == 1 ? "YES" : "NO");
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
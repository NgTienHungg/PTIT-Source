#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int res = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (max(a[i], a[i + 1]) <= 2 * min(a[i], a[i + 1]))
            continue;
        if (a[i] < a[i + 1]) {
            int now = a[i];
            while (now * 2 < a[i + 1]) {
                now *= 2;
                res++;
            }
        } else {
            int now = a[i];
            while (now > 2 * a[i + 1]) {
                now = ceil(1.0 * now / 2);
                res++;
            }
        }
    }
    cout << res;
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

// 6
// 4
// 4 2 10 1
// 2
// 1 3
// 2
// 6 1
// 3
// 1 4 2
// 5
// 1 2 3 4 3
// 12 
// 4 31 25 50 30 20 34 46 42 16 15 16
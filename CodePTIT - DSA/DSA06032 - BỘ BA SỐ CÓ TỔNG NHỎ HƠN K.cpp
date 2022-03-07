// https://code.ptit.edu.vn/student/question/DSA06032
// BỘ BA SỐ CÓ TỔNG NHỎ HƠN K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    long long a[5000], ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long x = k - a[i] - a[j];
            ans += lower_bound(a + j + 1, a + n, x) - (a + j + 1);
        }
    }
    cout << ans;
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
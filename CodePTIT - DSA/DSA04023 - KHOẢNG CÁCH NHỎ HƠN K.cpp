// https://code.ptit.edu.vn/student/question/DSA04023
// KHOẢNG CÁCH NHỎ HƠN K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    long long a[n]; //! kiểu dữ liệu để long long
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
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
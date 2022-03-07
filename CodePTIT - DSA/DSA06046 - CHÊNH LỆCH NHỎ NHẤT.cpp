// https://code.ptit.edu.vn/student/question/DSA06046
// CHÊNH LỆCH NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    sort(a.begin(), a.end());
    int ans = 1e9;
    for (int i = 1; i < n; ++i) {
        ans = min(ans, a[i] - a[i - 1]);
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
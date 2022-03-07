// https://code.ptit.edu.vn/student/question/DSA06033
// KHOẢNG CÁCH XA NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    // @.@
    int n; cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int ans = -1, Min = a[0].second, k = a[0].first;
    for (int i = 1; i < n; i++) {
        if (a[i].first > k)
            ans = max(ans, a[i].second - Min);
        if (Min > a[i].second) {
            Min = a[i].second;
            k = a[i].first;
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
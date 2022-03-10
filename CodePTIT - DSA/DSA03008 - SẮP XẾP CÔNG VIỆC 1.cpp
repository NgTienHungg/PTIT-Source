// https://code.ptit.edu.vn/student/question/DSA03008
// SẮP XẾP CÔNG VIỆC 1

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void testCase() {
    int n; cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> a[i].second;
    }
    sort(a, a + n, cmp);
    int ans = 1, now = a[0].second;
    for (int i = 1; i < n; ++i) {
        if (a[i].first >= now) {
            ans++;
            now = a[i].second;
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
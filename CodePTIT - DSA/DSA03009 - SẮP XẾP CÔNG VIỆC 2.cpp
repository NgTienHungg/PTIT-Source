// https://code.ptit.edu.vn/student/question/DSA03009
// SẮP XẾP CÔNG VIỆC 2

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second > b.second;
}

void testCase() {
    int n, x, maxx;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> x >> a[i].first >> a[i].second;
        maxx = max(maxx, a[i].first);
    }
    sort(a.begin(), a.end(), cmp);

    vector<bool> dd(maxx + 1, 0);
    pair<int, int> ans = {0, 0};
    for (int i = 0; i < n; ++i) {
        for (int j = a[i].first; j >= 1; --j) {
            if (!dd[j]) {
                dd[j] = 1;
                ans.first++;
                ans.second += a[i].second;
                break;
            }
        }
    }
    cout << ans.first << " " << ans.second;
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
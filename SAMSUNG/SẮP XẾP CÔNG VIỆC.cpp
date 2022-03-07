#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first; 
    return a.second < b.second;
}
void TestCase() {
    int n;
    cin >> n;
    pair<int, int> a[1001];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].first;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].second;
    }

    sort(a + 1, a + 1 + n, cmp);

    // time là thời điểm kết thúc công việc trước đó
    int time = a[1].second, ans = 1;
    for (int i = 2; i <= n; ++i) {
        if (time <= a[i].first) {
            ans++;
            time = a[i].second;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/DSA06039
// SỐ ĐẦU TIÊN BỊ LẶP

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    pair<int, int> ans(-1, 1e6); // value | index

    map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        if (mp.find(x) != mp.end()) {
            if (mp[x] < ans.second) {
                ans = {x, mp[x]};
            }
        }
        else mp[x] = i;
    }
    if (ans.second == 1e6) cout << "NO";
    else cout << ans.first;
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
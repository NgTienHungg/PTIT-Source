// https://code.ptit.edu.vn/student/question/DSA08009
// BIẾN ĐỔI S – T

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int s, t;
    cin >> s >> t;
    queue<pair<int, int>> q;
    map<int, bool> mp;
    q.push({s, 0});
    while (!q.empty()) {
        pair<int, int> p = q.front(); q.pop();
        if (p.first == t) {
            cout << p.second;
            return;
        }
        if (p.first - 1 == t || p.first * 2 == t) {
            cout << p.second + 1;
            return;
        }


        if (p.first * 2 <= t * 2 && mp[p.first * 2] == 0) {
            q.push({p.first * 2, p.second + 1});
            mp[p.first * 2] = 1;
        }
        if (p.first - 1 >= 0 && mp[p.first - 1] == 0) {
            q.push({p.first - 1, p.second + 1});
            mp[p.first - 1] = 1;
        }
    }
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
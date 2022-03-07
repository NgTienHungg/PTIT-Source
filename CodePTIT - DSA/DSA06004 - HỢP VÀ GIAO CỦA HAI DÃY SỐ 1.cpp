// https://code.ptit.edu.vn/student/question/DSA06004
// HỢP VÀ GIAO CỦA HAI DÃY SỐ 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, x;
    cin >> n >> m;

    set<int> a, b;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; ++i) {
        cin >> x;
        b.insert(x);
    }

    map<int, int> mp;
    for (int i : a) mp[i]++;
    for (int i : b) mp[i]++;

    for (auto i : mp) {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i : mp) {
        if (i.second >= 2)
            cout << i.first << " ";
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
// https://code.ptit.edu.vn/student/question/DSA06005
// HỢP VÀ GIAO CỦA HAI DÃY SỐ 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, x;
    cin >> n >> m;

    map<int, int> mp;
    for (int i  = 0; i < n; ++i) {
        cin >> x;
        mp[x]++;
    }
    for (int i  = 0; i < m; ++i) {
        cin >> x;
        mp[x]++;
    }

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
// https://code.ptit.edu.vn/student/question/DSA06041
// SỐ XUẤT HIỆN NHIỀU NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        m[x]++;
    }

    for (auto i : m) {
        if (i.second > n / 2) {
            cout << i.first;
            return;
        }
    }
    cout << "NO";
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
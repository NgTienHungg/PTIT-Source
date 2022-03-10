// https://code.ptit.edu.vn/student/question/DSA09020
// CHUYỂN DANH SÁCH KỀ SANG MA TRẬN KỀ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x; cin >> n;
    vector<vector<int>> e(n + 1);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> x;
            if (x == 1) e[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j : e[i]) cout << j << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
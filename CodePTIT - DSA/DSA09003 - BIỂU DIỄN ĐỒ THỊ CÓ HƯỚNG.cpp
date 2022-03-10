// https://code.ptit.edu.vn/student/question/DSA09003
// BIỂU DIỄN ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int v, e, x, y;
    cin >> v >> e;
    vector<vector<int>> g(v + 1);
    while (e--) {
        cin >> x >> y;
        g[x].push_back(y);
    }
    for (int i = 1; i <= v; ++i) {
        cout << i << ": ";
        for (int j : g[i]) cout << j << " ";
        cout << endl;
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
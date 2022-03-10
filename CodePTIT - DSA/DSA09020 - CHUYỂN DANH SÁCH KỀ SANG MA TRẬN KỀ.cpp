// https://code.ptit.edu.vn/student/question/DSA09020
// CHUYỂN DANH SÁCH KỀ SANG MA TRẬN KỀ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n; cin.ignore();
    int a[n + 1][n + 1] = {};
    for (int i = 1; i <= n; ++i) {
        string s; getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x) {
            a[i][x] = 1;
            a[x][i] = 1;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
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
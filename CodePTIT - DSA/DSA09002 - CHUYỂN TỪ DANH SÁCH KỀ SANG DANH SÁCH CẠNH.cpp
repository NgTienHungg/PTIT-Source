// https://code.ptit.edu.vn/student/question/DSA09002
// CHUYỂN TỪ DANH SÁCH KỀ SANG DANH SÁCH CẠNH

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
        for (int j = i + 1; j <= n; ++j) {
            if (a[i][j] == 1) {
                cout << i << " " << j << endl;
            }
        }
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
// https://code.ptit.edu.vn/student/question/CPP0221
// QUAY MA TRẬN

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = n - 1; i >= n / 2; i--) {
        for (int j = n - i; j <= i; j++) {
            b[n - i - 1][j] = a[n - i - 1][j - 1];
            b[i][j - 1] = a[i][j];
            b[j][i] = a[j - 1][i];
            b[j - 1][n - i - 1] = a[j][n - i - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i][j] == 0) cout << a[i][j] << " ";
            else cout << b[i][j] << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
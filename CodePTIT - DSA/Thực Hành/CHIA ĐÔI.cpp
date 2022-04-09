#include <bits/stdc++.h>
using namespace std;

long long f[35][35] = {};

void prepare() {
    f[0][0] = 0;
    f[0][1] = f[1][0] = 1;
    for (int i = 0; i <= 30; ++i) {
        for (int j = 0; j <= 30; ++j) {
            if (i == 0) f[i][j] = 1;
            if (j == 0) f[i][j] = f[i - 1][1];
            if (i && j) f[i][j] = f[i - 1][j + 1] + f[i][j - 1];
        }
    }
}

void testCase() {
    int n; cin >> n;
    cout << f[n][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// 6
// 6
// 1
// 4
// 2
// 3
// 30
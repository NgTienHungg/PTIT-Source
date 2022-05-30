// https://code.ptit.edu.vn/student/question/DSA05028
// BIẾN ĐỔI XÂU

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    int f[n + 1][m + 1] = {};
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i == 0)
                f[i][j] = j;
            else if (j == 0)
                f[i][j] = i;
            else if (a[i - 1] == b[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + 1;
        }
    }
    cout << f[n][m];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
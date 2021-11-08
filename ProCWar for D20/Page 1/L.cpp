#include <bits/stdc++.h>
using namespace std;

int n, a[1001][1001];
long long f[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(a, -1, sizeof(a));
    memset(f, 0, sizeof(f));

    cin >> n; 
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i][j] == -1 || (f[i - 1][j] == 0 && f[i][j - 1] == 0 && !(i == 1 && j == 1)))
                continue;
            f[i][j] = a[i][j] + max(f[i - 1][j], f[i][j - 1]);
        }
    }

    if (f[n][n] != 0)
        cout << "YES\n" << f[n][n];
    else
        cout << "NO";
    return 0;
}
// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/H
// H. Kho báu - Phần 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    
    int b[n - k + 1][n];
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i <= n - k; ++i) {
            if (i == 0) {
                int sum = 0;
                for (int l = 0; l < k; ++l) {
                    sum += a[l][j];
                }
                b[i][j] = sum;
            }
            else {
                b[i][j] = b[i - 1][j] - a[i - 1][j] + a[i + k - 1][j];
            }
        }
    }

    int c[n - k + 1][n - k + 1];
    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= n - k; ++j) {
            if (j == 0) {
                int sum = 0;
                for (int l = 0; l < k; ++l) {
                    sum += b[i][l];
                }
                c[i][j] = sum;
            }
            else {
                c[i][j] = c[i][j - 1] - b[i][j - 1] + b[i][j + k - 1];
            }
        }
    }

    int res = 0;
    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= n - k; ++j) {
            res = max(res, c[i][j]);
        }
    }
    cout << res;
    return 0;
}
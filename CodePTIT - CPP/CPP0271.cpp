// https://code.ptit.edu.vn/student/question/CPP0271
// LÀM MỊN ẢNH

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    
    int b[n - k + 1][m];
    for (int j = 0; j < m; ++j) {
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

    int c[n - k + 1][m - k + 1];
    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= m - k; ++j) {
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

    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= m - k; ++j) {
            cout << c[i][j] / (k * k) << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
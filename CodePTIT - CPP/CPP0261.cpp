// https://code.ptit.edu.vn/student/question/CPP0261
// CỬA SỔ TRƯỢT

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int m;
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i += m) {
        for (int j = 0; j < n; j += m) {
            for (int k = 0; k < m; ++k) {
                for (int l = 0; l < m; ++l) {
                    a[i + k][j + l] *= b[k][l];
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
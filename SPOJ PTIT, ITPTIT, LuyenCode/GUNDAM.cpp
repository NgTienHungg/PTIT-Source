// https://luyencode.net/problem/GUNDAM
// GUNDAM - Đừng động vào Gundam của anh Hiếu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int d = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (a[i][j] == '.' && a[i][j + 1] == '.')
                d++;
        }
    }
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n - 1; ++i) {
            if (a[i][j] == '.' && a[i + 1][j] == '.')
                d++;
        }
    }
    cout << d;
    return 0;
}
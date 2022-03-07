// https://luyencode.net/problem/RSPRIAL
// RSPRIAL - Ma trận xoắn ốc 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    }
    vector<int> v;
    int tren = 0, duoi = n - 1;
    int trai = 0, phai = m - 1;
    int id = 0; // index
    while (id < n * m) {
        for (int i = trai; i <= phai; ++i) {
            cout << a[tren][i] << " ";
            id++;
        }
        if (id == m * n) break;
        tren++;
        for (int i = tren; i <= duoi; ++i) {
            cout << a[i][phai] << " ";
            id++;
        }
        if (id == m * n) break;
        phai--;
        for (int i = phai; i >= trai; --i) {
            cout << a[duoi][i] << " ";
            id++;
        }
        if (id == m * n) break;
        duoi--;
        for (int i = duoi; i >= tren; --i) {
            cout << a[i][trai] << " ";
            id++;
        }
        if (id == m * n) break;
        trai++;
    }
    return 0;
}
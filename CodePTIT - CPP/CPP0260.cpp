// https://code.ptit.edu.vn/student/question/CPP0260
// MA TRẬN XOẮN ỐC - 4

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n * n], b[n][n];
    for (auto &x : a) cin >> x;
    sort(a, a + n * n);
    int row = n - 1, col = n - 1, id = 0, d = 0;
    while (d <= n / 2) {
        for (int i = d; i <= col; ++i)
            b[d][i] = a[id++];
        for (int i = d + 1; i <= row; ++i)
            b[i][col] = a[id++];
        for (int i = col - 1; i >= d; --i)
            b[row][i] = a[id++];
        for (int i = row - 1; i > d; --i)
            b[i][d] = a[id++];
        d++, row--, col--;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
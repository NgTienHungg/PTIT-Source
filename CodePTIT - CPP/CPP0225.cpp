// https://code.ptit.edu.vn/student/question/CPP0225
// BIẾN ĐỔI MA TRẬN

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n][n], row[n], col[n], maxx = 0;
    bool flag = 0; // 0: hàng có tổng max, 1: cột có tổng max
    for (int i = 0; i < n; ++i) {
        row[i] = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            row[i] += a[i][j];
        }
        if (row[i] > maxx) {
            maxx = row[i];
            flag = 0;
        }
    }

    for (int j = 0; j < n; ++j) {
        col[j] = 0;
        for (int i = 0; i < n; ++i) {
            col[j] += a[i][j];
        }
        if (col[j] > maxx) {
            maxx = col[j];
            flag = 1;
        }
    }

    int res = 0;
    if (!flag) {
        for (auto x : col)
            res += maxx - x;
    }
    else {
        for (auto x : row)
            res += maxx - x;
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
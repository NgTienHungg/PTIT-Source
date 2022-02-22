// https://code.ptit.edu.vn/student/question/CPP0223
// MA TRẬN XOẮN ỐC - 1

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int d = 0;
    int up = 0, down = n - 1;
    int left = 0, right = m - 1;
    while (1) {
        for (int i = left; i <= right; ++i) {
            cout << a[up][i] << " ";
            d++;
        }
        up++;
        if (d == n * m) break;

        for (int i = up; i <= down; ++i) {
            cout << a[i][right] << " ";
            d++;
        }
        right--;
        if (d == n * m) break;

        for (int i = right; i >= left; --i) {
            cout << a[down][i] << " ";
            d++;
        }
        down--;
        if (d == n * m) break;

        for (int i = down; i >= up; --i) {
            cout << a[i][left] << " ";
            d++;
        }
        left++;
        if (d == n * m) break;
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}
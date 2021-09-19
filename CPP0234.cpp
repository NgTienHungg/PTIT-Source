// https://code.ptit.edu.vn/student/question/CPP0234
// MA TRẬN XOẮN ỐC - 3

#include <bits/stdc++.h>
#define endl '\n'
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
    vector<int> v;
    int d = 0;
    int up = 0, down = n - 1;
    int left = 0, right = m - 1;
    while (1) {
        for (int i = left; i <= right; ++i) {
            v.push_back(a[up][i]);
            d++;
        }
        up++;
        if (d == n * m) break;

        for (int i = up; i <= down; ++i) {
            v.push_back(a[i][right]);
            d++;
        }
        right--;
        if (d == n * m) break;

        for (int i = right; i >= left; --i) {
            v.push_back(a[down][i]);
            d++;
        }
        down--;
        if (d == n * m) break;

        for (int i = down; i >= up; --i) {
            v.push_back(a[i][left]);
            d++;
        }
        left++;
        if (d == n * m) break;
    }
    cout << v[k-1] << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}
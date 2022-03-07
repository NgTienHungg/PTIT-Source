// https://code.ptit.edu.vn/student/question/DSA02027
// NGƯỜI DU LỊCH

#include <bits/stdc++.h>
using namespace std;

int n, minKc, ans;
int a[20][20], vs[20];

void Try(int ind, int cou, int val) {
    //! nếu chi phí hiện tại + chi phí tối thiểu để đi (n - k + 1) tp còn lại >= ans thì k cần đi nữa vì chắc chắn k tối ưu
    if (val + minKc * (n - cou + 1) >= ans) return;
    if (cou == n) {
        val += a[ind][1];
        ans = min(ans, val);
        return;
    }
    for (int i = 2; i <= n; ++i) {
        if (vs[i] == 0) {
            vs[i] = 1;
            Try(i, cou + 1, val + a[ind][i]);
            vs[i] = 0;
        }
    }
}

void testCase() {
    minKc = ans = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            minKc = min(minKc, a[i][j]);
        }
    }
    vs[1] = 1;
    Try(1, 1, 0);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
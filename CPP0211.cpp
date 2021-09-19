// https://code.ptit.edu.vn/student/question/CPP0211
// KHOẢNG CÁCH XA NHẤT

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n;
    cin >> n;
    int a[n], b[n + 1] = {INT_MIN};
    for (auto &x : a) cin >> x;
    for (int i = n - 1; i >=0; --i) {
        b[i] = max(b[i + 1], a[i]);
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (b[m] >= a[i]) {
                l = m + 1;
                res = max(res, m - i);
            }
            else
                r = m - 1;
        }
    }
    cout << res << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}

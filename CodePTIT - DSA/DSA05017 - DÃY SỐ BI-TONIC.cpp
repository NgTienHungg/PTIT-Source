// https://code.ptit.edu.vn/student/question/DSA05017
// DÃY SỐ BI-TONIC

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n], l[n], r[n];
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; ++i) {
        l[i] = a[i];
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j]) {
                l[i] = max(l[i], l[j] + a[i]);
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        r[i] = a[i];
        for (int j = n - 1; j > i; --j) {
            if (a[i] > a[j]) {
                r[i] = max(r[i], r[j] + a[i]);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; ++i) {
        res = max(res, l[i] + r[i] - a[i]);
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
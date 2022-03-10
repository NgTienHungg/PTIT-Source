// https://code.ptit.edu.vn/student/question/DSA03016
// SỐ NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int s, d;
    cin >> s >> d;
    if (s > 9 * d) {
        cout << -1;
        return;
    }
    int a[d] = {1}; s--; // 100...
    for (int i = d - 1; i >= 0; --i) {
        int x = min(s, 9 - a[i]);
        a[i] += x;
        s -= x;
    }
    for (int i = 0; i < d; ++i) {
        cout << a[i];
    }
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
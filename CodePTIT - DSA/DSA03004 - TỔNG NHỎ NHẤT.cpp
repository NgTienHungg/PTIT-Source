// https://code.ptit.edu.vn/student/question/DSA03004
// TỔNG NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        x = x * 10 + a[i]; i++;
        if (i != n) y = y * 10 + a[i];
    }
    cout << x + y;
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
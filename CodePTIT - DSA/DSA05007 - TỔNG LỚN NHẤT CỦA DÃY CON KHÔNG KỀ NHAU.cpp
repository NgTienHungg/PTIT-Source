// https://code.ptit.edu.vn/student/question/DSA05007
// TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    long long a[n + 1], f[n + 1] = {};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (i == 1) f[i] = a[i];
        if (i >= 2) f[i] = max(f[i - 1], f[i - 2] + a[i]);
    }
    cout << *max_element(f + 1, f + 1 + n);
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
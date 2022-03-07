// https://code.ptit.edu.vn/student/question/DSA03035
// SẮP XẾP ĐƠN GIẢN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int f[n + 1] = {};
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        f[x] = f[x - 1] + 1;
    }
    cout << n - *max_element(f + 1, f + 1 + n);
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
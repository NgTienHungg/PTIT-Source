// https://code.ptit.edu.vn/student/question/DSA05031
// TỔNG BÌNH PHƯƠNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> f(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        f[i] = i;
        for (int j = 1; j <= sqrt(i); ++j) {
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }
    cout << f[n];
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
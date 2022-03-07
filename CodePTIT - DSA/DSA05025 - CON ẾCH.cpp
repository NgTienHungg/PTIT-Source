// https://code.ptit.edu.vn/student/question/DSA05025
// CON ẾCH

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long> f(n + 1, 0);
    long long tmp = 0;
    for (int i = 1; i <= min(3, n); ++i) {
        f[i] = tmp + 1;
        tmp += f[i];
    }
    for (int i = 4; i <= n; ++i) {
        for (int j = 1; j <= 3; ++j) {
            f[i] += f[i - j];
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
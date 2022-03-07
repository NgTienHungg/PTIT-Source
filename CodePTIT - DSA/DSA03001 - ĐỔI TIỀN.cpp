// https://code.ptit.edu.vn/student/question/DSA03001
// ĐỔI TIỀN

#include <bits/stdc++.h>
using namespace std;

const int f[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 };

void testCase() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 9; i >= 0; --i) {
        ans += n / f[i];
        n %= f[i];
    }
    cout << ans;
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
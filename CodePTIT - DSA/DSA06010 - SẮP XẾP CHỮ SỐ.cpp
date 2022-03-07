// https://code.ptit.edu.vn/student/question/DSA06010
// SẮP XẾP CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    bool dd[10] = {false};
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        while (x) {
            dd[x % 10] = true;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (dd[i]) cout << i << " ";
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
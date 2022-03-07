// https://code.ptit.edu.vn/student/question/DSA06021
// TÌM KIẾM TRONG DÃY SẮP XẾP VÒNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x, ans;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        int num; cin >> num;
        if (num == x) ans = i;
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
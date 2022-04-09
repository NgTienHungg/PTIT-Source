// https://code.ptit.edu.vn/student/question/DSA04010
// DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, sum = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum = max(a[i], sum + a[i]);
        ans = max(ans, sum);
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
// https://code.ptit.edu.vn/student/question/DSA06011
// TỔNG GẦN 0 NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int ans = 2e6;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(ans)) ans = sum;
        }
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
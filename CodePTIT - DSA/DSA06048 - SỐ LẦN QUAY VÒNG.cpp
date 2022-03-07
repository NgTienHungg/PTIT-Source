// https://code.ptit.edu.vn/student/question/DSA06048
// SỐ LẦN QUAY VÒNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            ans = i;
            break;
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
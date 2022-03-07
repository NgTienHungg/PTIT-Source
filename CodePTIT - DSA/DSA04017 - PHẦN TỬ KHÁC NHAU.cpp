// https://code.ptit.edu.vn/student/question/DSA04017
// PHẦN TỬ KHÁC NHAU

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = -1;
    for (int i = 0; i < n - 1; ++i) {
        int x; cin >> x;
        if (x != a[i] && ans == -1) {
            ans = i + 1;
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
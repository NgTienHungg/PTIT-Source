// https://code.ptit.edu.vn/student/question/DSA06009
// CẶP SỐ TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] + a[j] == k)
                ans++;
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
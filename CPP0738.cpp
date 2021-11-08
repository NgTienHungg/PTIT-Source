// https://code.ptit.edu.vn/student/question/CPP0738
// CỘNG 1 VÀ NHÂN ĐÔI

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int ans = 0;
    while (1) {
        int d = 0; // dem so phan tu = 0
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 1) {
                a[i]--; ans++;
            }
            if (a[i] == 0) d++;
        }
        if (d == n) break;
        for (int &x : a) x /= 2;
        ans++;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
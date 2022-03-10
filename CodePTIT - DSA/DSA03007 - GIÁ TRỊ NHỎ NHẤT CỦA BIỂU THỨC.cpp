// https://code.ptit.edu.vn/student/question/DSA03007
// GIÁ TRỊ NHỎ NHẤT CỦA BIỂU THỨC

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long> a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    long long res = 0;
    for (int i = 0; i < n; ++i) {
        res += a[i] * b[i];
    }
    cout << res;

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
// https://code.ptit.edu.vn/student/question/DSA01004
// SINH TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(k + 1);
    Try(1);
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
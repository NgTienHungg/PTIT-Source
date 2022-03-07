// https://code.ptit.edu.vn/student/question/DSA01006
// HOÁN VỊ NGƯỢC

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = n; j >= 1; --j) {
        if (!b[j]) {
            a[i] = j;
            b[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1, 0);
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
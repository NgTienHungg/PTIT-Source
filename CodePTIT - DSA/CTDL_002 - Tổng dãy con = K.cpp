// https://code.ptit.edu.vn/student/question/CTDL_002
// Tổng dãy con = K

#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
vector<int> a, b;

void solve() {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }
    if (sum == k) {
        ans++;
        for (int i = 0; i < n; ++i) {
            if (b[i]) cout << a[i] << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        b[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int &i : a) cin >> i;
    Try(0);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CTDL_004
// DÃY CON TĂNG DẦN BẬC K

#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 0;
vector<int> a, b, c;

void solve() {
    vector<int> tmp = c;
    sort(tmp.begin(), tmp.end());
    if (tmp == c) ans++;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; ++j) {
        b[i] = j;
        c[i] = a[b[i]];
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n + 1); // mang ban dau
    b.resize(k + 1, 0); // to hop index
    c.resize(k + 1, 0); // b -> c
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    Try(1);
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
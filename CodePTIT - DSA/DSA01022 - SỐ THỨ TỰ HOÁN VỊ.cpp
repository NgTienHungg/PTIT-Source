// https://code.ptit.edu.vn/student/question/DSA01022
// SỐ THỨ TỰ HOÁN VỊ

#include <bits/stdc++.h>
using namespace std;

int n, res;
int a[10], u[10], temp[10];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= n; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = 1; j <= n; ++j) {
        if (!u[j]) {
            a[i] = j;
            u[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

void testCase() {
    res = 0; stop = false;
    memset(u, 0, sizeof(u));
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> temp[i];
    }
    Try(1);
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
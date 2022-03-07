// https://code.ptit.edu.vn/student/question/DSA01023
// SỐ THỨ TỰ TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

int n, k, res;
int a[20], temp[20];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= k; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    res = 0; stop = false;
    cin >> n >> k;
    for (int i = 1; i <= k; ++i) {
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
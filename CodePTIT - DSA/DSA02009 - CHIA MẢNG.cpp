// https://code.ptit.edu.vn/student/question/DSA02009
// CHIA MẢNG

#include <bits/stdc++.h>
using namespace std;

int n, k, s, stop;
int a[25];

void Try(int sum, int cou) {
    if (stop) return;
    if (cou == k) {
        stop = 1;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (sum == s)
            Try(0, cou + 1);
        else if (sum < s) 
            Try(sum + a[i], cou);
        else
            return;
    }
}

void testCase() {
    s = 0, stop = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    if (s % k != 0) {
        cout << 0;
        return;
    }
    s /= k;
    Try(0, 0);
    cout << (stop ? 1 : 0);
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
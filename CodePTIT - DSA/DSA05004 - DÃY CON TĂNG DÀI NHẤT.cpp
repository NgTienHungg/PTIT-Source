// https://code.ptit.edu.vn/student/question/DSA05004
// DÃY CON TĂNG DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        f[i] = 1;
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << *max_element(f, f + n);
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
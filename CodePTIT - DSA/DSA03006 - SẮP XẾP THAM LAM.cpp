// https://code.ptit.edu.vn/student/question/DSA03006
// SẮP XẾP THAM LAM

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[100];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i] != i && a[i] != n - i + 1) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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
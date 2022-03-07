// https://code.ptit.edu.vn/student/question/DSA01003
// HOÁN VỊ KẾ TIẾP

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1]) i--;
    if (i == 0) {
        for (int j = 1; j <= n; ++j) {
            a[j] = j;
        }
    }
    else {
        for (int j = n; j > i; --j) {
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
                break;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
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
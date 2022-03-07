// https://code.ptit.edu.vn/student/question/DSA06043
// ĐIỂM CÂN BẰNG

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= n; ++i) {
        int sum_left = a[i - 1];
        int sum_right = a[n] - a[i];
        if (sum_left == sum_right) {
            cout << i;
            return;
        }
    }
    cout << -1;
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
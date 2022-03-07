// https://code.ptit.edu.vn/student/question/DSA06003
// ĐỔI CHỖ ÍT NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int k = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[k]) k = j;
        }
        if (k != i) {
            ans++;
            swap(a[i], a[k]);
        }
    }
    cout << ans;
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
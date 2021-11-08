// https://code.ptit.edu.vn/student/question/CPP0242
// DÃY SỐ NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    int a[1001] = {0}, b[1001] = {0};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
        b[i] += b[i - 1];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (a[i] - a[j - 1] == b[i] - b[j - 1])
                ans = max(ans,i - j + 1);
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
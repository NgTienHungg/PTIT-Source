// https://code.ptit.edu.vn/student/question/CPP0731
// SỐ BƯỚC DỊCH CHUYỂN ÍT NHẤT

#include <bits/stdc++.h>
using namespace std;
 
void TestCase(){
	int n; cin >> n;
    vector<int> a(n), f(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (a[0] == 0) {
        cout << -1;
        return;
    }

    f[0] = 0;
    for (int i = 1; i < n; ++i) {
        f[i] = INT_MAX;
        for (int j = 0; j < i; ++j) {
            if (j + a[j] >= i && f[j] != INT_MAX) {
                f[i] = f[j] + 1;
                break;
            }
        }
    }
    if (f[n - 1] != INT_MAX) cout << f[n - 1];
    else cout << -1;
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
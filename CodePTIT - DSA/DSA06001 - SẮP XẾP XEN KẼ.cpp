// https://code.ptit.edu.vn/student/question/DSA06001
// SẮP XẾP XEN KẼ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n / 2; ++i) {
        cout << a[i] << " " << a[n - i - 1] << " ";
    }
    if (n % 2 != 0) cout << a[n / 2];
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
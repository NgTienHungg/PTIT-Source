// https://code.ptit.edu.vn/student/question/DSA04020
// TÌM KIẾM NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int pos = lower_bound(a.begin(), a.end(), k) - a.begin();
    if (pos == n || a[pos] != k) cout << "NO";
    else cout << pos + 1;
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
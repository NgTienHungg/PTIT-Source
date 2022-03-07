// https://code.ptit.edu.vn/student/question/DSA06022
// SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());
    if (v.size() == 1) cout << -1;
    else cout << v[0] << " " << v[1];
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
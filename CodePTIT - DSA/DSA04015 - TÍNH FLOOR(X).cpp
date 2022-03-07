// https://code.ptit.edu.vn/student/question/DSA04015
// TÍNH FLOOR(X)

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;
    int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
    if (pos > 0) pos;
    else pos = -1;
    cout << pos;
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
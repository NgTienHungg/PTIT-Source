// https://code.ptit.edu.vn/student/question/DSA06047
// BỘ BA SỐ PYTAGO

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long C = pow(a[i], 2) + pow(a[j], 2);
            long long c = sqrt(C);
            if (c * c == C && binary_search(a.begin() + j + 1, a.end(), c)) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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
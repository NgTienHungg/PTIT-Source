// https://code.ptit.edu.vn/student/question/DSA06016
// TÍCH LỚN NHẤT - NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    cout << (long long) *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end());
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
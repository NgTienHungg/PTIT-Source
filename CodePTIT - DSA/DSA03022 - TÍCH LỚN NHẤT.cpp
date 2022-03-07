// https://code.ptit.edu.vn/student/question/DSA03022
// TÍCH LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    vector<int> res;
    res.push_back(a[0] * a[1]);
    res.push_back(a[n - 1] * a[n - 2]);
    res.push_back(a[0] * a[1] * a[n - 1]);
    res.push_back(a[n - 1] * a[n - 2] * a[n - 3]);
    sort(res.rbegin(), res.rend());
    cout << res[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
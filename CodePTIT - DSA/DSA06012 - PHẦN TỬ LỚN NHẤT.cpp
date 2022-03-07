// https://code.ptit.edu.vn/student/question/DSA06012
// PHẦN TỬ LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    a.resize(k);
    for (int i : a) cout << i << " ";
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
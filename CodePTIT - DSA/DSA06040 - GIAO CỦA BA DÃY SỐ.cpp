// https://code.ptit.edu.vn/student/question/DSA06040
// GIAO CỦA BA DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m), c(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;

    vector<long long> res;
    int i = 0, j = 0, z = 0;
    while (i < n && j < m && z < k) {
        if (a[i] == b[j] && a[i] == c[z]) {
            res.push_back(a[i]);
            i++, j++, z++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[z]) j++;
        else z++;
    }
    
    if (res.empty()) cout << -1;
    else {
        for (auto i : res) {
            cout << i << " ";
        }
    }
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
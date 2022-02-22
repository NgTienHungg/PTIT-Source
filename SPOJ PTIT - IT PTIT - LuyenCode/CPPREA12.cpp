// https://www.spoj.com/PTIT/problems/CPPREA12/
// CPPREA12 - Re-arrang Array 12

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long res = -1e18;
    for (int i = 0; i < n; ++i) {
        long long temp = 1;
        for (int j = i; j < n; ++j) {
            temp *= a[j];
            res = max(res, temp);
        }
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
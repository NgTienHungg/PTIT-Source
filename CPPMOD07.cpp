// https://www.spoj.com/PTIT/problems/CPPMOD07/
// CPPMOD07 - MODULO 7

#include <bits/stdc++.h>
using namespace std;

void Faster() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

void TestCase() {
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    
    sort(a, a + n);
    int d = a[n - 1] - a[0];
    vector<int> v;
    for (int i = 1; i <= sqrt(d); ++i) {
        if (d % i == 0) {
            v.push_back(i);
            if (i * i != d)
                v.push_back(d / i);
        }
    }

    int res = 0;
    for (auto k : v) {
        int temp = a[0] % k;
        bool ok = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] % k != temp) {
                ok = 0;
                break;
            }
        }
        if (ok)
            res++;
    }
    cout << res << endl;
}

int main() {
    Faster();
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
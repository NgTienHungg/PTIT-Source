// https://code.ptit.edu.vn/student/question/CPP0720
// DÃY SỐ BITONIC

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i <=n; ++i) {
        cin >> a[i];
    }

    int L[n + 1] = {0}, R[n + 1] = {0};
    for (int i = 1; i <= n; ++i) {
        L[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (a[i] > a[j])
                L[i] = max(L[i], L[j] + 1);
        }
    }
    for (int i = n; i >= 1; --i) {
        R[i] = 1;
        for (int j = n; j > i; --j) {
            if (a[i] > a[j])
                R[i] = max(R[i], R[j] + 1);
        }
    }

    int res = 0;
    for (int i = 1; i <= n; ++i) {
        res = max(res, R[i] + L[i] - 1);
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
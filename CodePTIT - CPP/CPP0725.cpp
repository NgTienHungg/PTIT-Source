// https://code.ptit.edu.vn/student/question/CPP0725
// TÍNH SỐ TỔ HỢP

#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);
using namespace std;

const int mod = 1e9 + 7;
long long a[1001][1001];

long long C(int k, int n) {
    if (k > n - k)
        k = n - k;
    if (a[k][n] != 0)
        return a[k][n];
    if (k == 0)
        a[k][n] = 1;
    else if (k == 1)
        a[k][n] = n;
    else
        a[k][n] = C(k - 1, n - 1) + C(k, n - 1);
    a[k][n] %= mod;
    return a[k][n];
}

void TestCase() {
    int n, k;
    cin >> n >> k;
    cout << C(k, n) << endl;
}

int main() {
    faster();
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
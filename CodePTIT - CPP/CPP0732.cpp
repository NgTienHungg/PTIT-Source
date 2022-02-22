// https://code.ptit.edu.vn/student/question/CPP0732
// TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN

#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long f[1000] = {0};
    for (int i = 0; i < n; ++i) {
        f[i] = a[i];
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
    }
    cout << *max_element(f, f + n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0727
// TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    if (n == 1) cout << a[0];
    else if (n == 2) cout << max(a[0], a[1]);
    else {
        long long b = a[0], c = a[1], d = a[0] + a[2];
        for (int i = 3; i < n; ++i) {
            long long e = a[i];
            if (b > c) e += b;
            else e += c;
            b = c, c = d, d = e;
        }
        if (c > d) cout << c;
        else cout << d;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/DSA04021
// DÃY XÂU NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

long long f[100];
void prepare() {
    f[1] = f[2] = 1;
    for (int i = 3; i < 100; ++i) {
        f[i] = f[i - 2] + f[i - 1];
    }
}

void testCase() {
    long long n, k;
    cin >> n >> k;
    while (true) {
        if (n == 1 || n == 2) {
            if (n == 1) cout << 0;
            else cout << 1;
            return;
        }
        if (k <= f[n - 2]) {
            n -= 2;
        }
        else {
            k -= f[n - 2];
            n -= 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
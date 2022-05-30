// https://code.ptit.edu.vn/student/question/DSA05035
// CHỮ SỐ SẮP XẾP TĂNG DẦN

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[11], f[101];
const ll MOD = 1e9 + 7;

void Prepare() {
    for (int i = 1; i <= 10; ++i)
        a[i] = 1;
    f[1] = 10;
    for (int i = 2; i <= 100; ++i) {
        for (int j = 1; j <= 9; ++j) {
            ll s = 0;
            for (int k = j; k <= 9; ++k)
                s += a[k];
            a[j] = s;
            f[i] = (f[i] + s) % MOD;
        }
    }
    for (int i = 2; i <= 100; ++i) {
        f[i] = (f[i] + f[i - 1]) % MOD;
    }
}

void TestCase() {
    int n; cin >> n;
    cout << f[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Prepare();
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

long long f[51];
void prepare() {
    f[1] = 1;
    for (int i = 2; i <= 50; ++i) {
        f[i] = f[i - 1] * 2;
    }
}

void TestCase() {
    long long n, k;
    cin >> n >> k;
    for (int i = n; i >= 1; --i) {
        if (k > f[i]) {
            k -= f[i];
        }
        else if (k == f[i]) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prepare();
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
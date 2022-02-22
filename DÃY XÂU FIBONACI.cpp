#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

long long f[93];
void prepare() {
    f[1] = f[2] = 1;
    for (int i = 3; i < 93; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

void TestCase() {
    long long n, i;
    cin >> n >> i;
    while (n > 2) {
        if (i <= f[n - 2]) {
            n -= 2;
        }
        else {
            i -= f[n - 2];
            n -= 1;
        }
    }
    (n == 1) ? cout << "A\n" : cout << "B\n";
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
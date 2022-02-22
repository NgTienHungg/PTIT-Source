#include <bits/stdc++.h>
using namespace std;

long long f[50];
void prepare() {
    f[0] = 1;
    for (int i = 1; i < 50; ++i) {
        f[i] = f[i - 1] * 2;
    }
}

void TestCase() {
    long long n, k;
    cin >> n >> k;
    for (int i = n - 1; i >= 0; --i) {
        if (k == f[i]) {
            cout << i + 1;
            return;
        }
        if (k > f[i]) k -= f[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
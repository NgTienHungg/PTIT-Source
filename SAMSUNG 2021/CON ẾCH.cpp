#include <bits/stdc++.h>
using namespace std;

long long f[51];
void prepare() {
    int sum = 0;
    for (int i = 1; i <= 3; ++i) {
        f[i] = sum + 1;
        sum += f[i];
    }
    for (int i = 4; i <= 50; ++i) {
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
}

void TestCase() {
    int n; cin >> n;
    cout << f[n];
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


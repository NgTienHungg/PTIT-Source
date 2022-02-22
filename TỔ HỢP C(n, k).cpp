#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

long long C[1001][1001];
void prepare() {
    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else if (j == 1 || j == i - 1)
                C[i][j] = i;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            C[i][j] %= mod;
        }
    }
}

void TestCase() {
    int n, k;
    cin >> n >> k;
    cout << C[n][k] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prepare();
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
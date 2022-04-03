#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
const ll MOD = 1e9 + 7;

class Matrix {
public:
    ll mt[15][15];

    Matrix operator * (Matrix B) {
        Matrix A = *this, C;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                C.mt[i][j] = 0;
                for (int k = 1; k <= n; ++k) {
                    C.mt[i][j] += A.mt[i][k] * B.mt[k][j];
                    C.mt[i][j] %= MOD;
                }
            }
        }
        return C;
    }
};

Matrix Pow(Matrix A, int k) {
    if (k == 1) {
        return A;
    }
    Matrix res = Pow(A, k / 2);
    res = res * res;
    if (k % 2 == 1) {
        res = res * A;
    }
    return res;
}

void testCase() {
    cin >> n >> k;
    Matrix A;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> A.mt[i][j];
        }
    }
    Matrix res = Pow(A, k);
    ll sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += res.mt[1][i];
        sum %= MOD;
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
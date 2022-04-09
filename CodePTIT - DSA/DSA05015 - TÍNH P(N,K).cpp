// https://code.ptit.edu.vn/student/question/DSA05015
// TÍNH P(N,K)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll P[1001][1001] = {};
ll M = 1e9 + 7;

void prepare() {
    for (int i = 1; i <= 1000; ++i) {
        P[i][1] = i;
    }
    for (int i = 2; i <= 1000; ++i) {
        for (int j = 2; j <= i; ++j) {
            P[i][j] = i * P[i - 1][j - 1] % M;
        }
    }
}

void testCase() {
    int n, k;
    cin >> n >> k;
    cout << P[n][k];
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
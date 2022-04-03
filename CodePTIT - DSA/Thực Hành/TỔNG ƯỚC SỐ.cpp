#include <bits/stdc++.h>
using namespace std;

int a, b;
vector<int> f;

void sieve() {
    for (int i = 1; i <= b; ++i) {
        for (int j = i; j <= b; j += i) {
            f[j] += i;
        }
    }
}

void testCase() {
    cin >> a >> b;
    f.resize(b + 1);
    sieve();
    int cou = 0;
    for (int i = a; i <= b; ++i) {
        cou += (f[i] - i > i);
    }
    cout << cou;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
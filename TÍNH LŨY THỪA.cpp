#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

long long Pow(long long a, long long b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    long long x = Pow(a, b / 2);
    long long y = x * x % mod;
    if (b & 1) return y * a % mod;
    return y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        cout << Pow(a, b) << endl;
    }
    return 0;
}
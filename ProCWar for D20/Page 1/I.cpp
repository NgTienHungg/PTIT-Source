#include <bits/stdc++.h>
using namespace std;

const int mod = 20122007;

long long Pow(int n) {
    if (n == 0) return 1;
    if (n == 1) return 3;
    long long temp = Pow(n / 2);
    long long res = temp * temp % mod;
    if (n % 2 == 1) return res * 3 % mod;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    long long ans = 1;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (i * i == n)
                ans = (ans * (Pow(i) - 1)) % mod;
            else
                ans = ((ans * (Pow(i) - 1)) % mod) * (Pow(n / i) - 1) % mod;
        }
    }
    cout << ans;
    return 0;
}
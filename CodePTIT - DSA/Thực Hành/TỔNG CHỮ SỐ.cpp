#include <bits/stdc++.h>
using namespace std;

int sumDigit(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void TestCase() {
    long long n, k, x = 1;
    cin >> n >> k;
    long long m = n;
    while (sumDigit(n) > k) {
        x *= 10;
        if (n % x != 0) {
            n = n - n % x + x;
        }
    }
    cout << n - m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
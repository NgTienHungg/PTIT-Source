#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    long long p, q;
    cin >> p >> q;
    while (1) {
        if (q % p == 0) {
            cout << "1/" << q / p;
            return;
        }
        
        long long x = q / p + 1;
        cout << "1/" << x << " + ";
        p = p * x - q;
        q *= x;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
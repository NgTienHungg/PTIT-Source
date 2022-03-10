// https://code.ptit.edu.vn/student/question/DSA03019
// PHÂN SỐ ĐƠN VỊ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
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
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
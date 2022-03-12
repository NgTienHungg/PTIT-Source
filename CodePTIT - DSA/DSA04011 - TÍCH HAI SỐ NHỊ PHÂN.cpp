// https://code.ptit.edu.vn/student/question/DSA04011
// TÍCH HAI SỐ NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string a, b;
    cin >> a >> b;
    long long x = 0, y = 0;
    for (int i = 0; i < a.length(); ++i) {
        x = x * 2 + (a[i] - '0');
    }
    for (int i = 0; i < b.length(); ++i) {
        y = y * 2 + (b[i] - '0');
    }
    cout << x * y;
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
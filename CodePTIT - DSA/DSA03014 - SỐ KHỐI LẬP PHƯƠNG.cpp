// https://code.ptit.edu.vn/student/question/DSA03014
// SỐ KHỐI LẬP PHƯƠNG

#include <bits/stdc++.h>
using namespace std;

bool isOk(string a, string b) {
    int index = 0;
    for (int i = 0; i < b.length(); ++i) {
        if (a[index] == b[i]) index++;
    }
    return (index == a.length());
}

void testCase() {
    long long x, y, z;
    cin >> x;
    y = cbrt(x);
    for (int i = y; i >= 1; --i) {
        z = pow(i, 3);
        if (isOk(to_string(z), to_string(x))) {
            cout << z;
            return;
        }
    }
    cout << -1;
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
// https://code.ptit.edu.vn/student/question/DSA04007
// HỆ CƠ SỐ K

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int k; string a, b;
    cin >> k >> a >> b;
    while (a.length() < b.length()) {
        a = "0" + a;
    }
    while (b.length() < a.length()) {
        b = "0" + b;
    }
    string s = ""; int rmb = 0;
    for (int i = a.length() - 1; i >= 0; --i) {
        int dg = (a[i] - '0') + (b[i] - '0') + rmb;
        s = char(dg % k + '0') + s;
        rmb = dg / k;
    }
    if (rmb > 0) s = char(rmb + '0') + s;
    cout << s;
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
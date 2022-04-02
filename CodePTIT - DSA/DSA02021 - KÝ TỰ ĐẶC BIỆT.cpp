// https://code.ptit.edu.vn/student/question/DSA02021
// KÝ TỰ ĐẶC BIỆT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long n, len, a[100], pos;
    string s;
    cin >> s >> n;
    len = s.length();
    s = ' ' + s;
    a[1] = len;
    for (int i = 2; i < 100; i++) {
        if (a[i - 1] * 2 >= n) {
            pos = i - 1;
            break;
        }
        a[i] = a[i - 1] * 2;
    }
    while (n > len) {
        if (a[pos] < n) {
            long long x = n - a[pos];
            if (x == 1)
                n = a[pos - 1];
            else
                n = x - 1;
        }
        pos--;
    }
    cout << s[n];
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
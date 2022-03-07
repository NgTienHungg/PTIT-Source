// https://code.ptit.edu.vn/student/question/DSA01020
// XÂU NHỊ PHÂN TRƯỚC

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i--] = '1';
    }
    if (i >= 0) s[i] = '0';
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
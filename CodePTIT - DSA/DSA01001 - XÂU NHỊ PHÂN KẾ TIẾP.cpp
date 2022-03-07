// https://code.ptit.edu.vn/student/question/DSA01001
// XÂU NHỊ PHÂN KẾ TIẾP

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '1') s[i] = '0';
        else {
            s[i] = '1';
            break;
        }
    }
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
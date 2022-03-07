// https://code.ptit.edu.vn/student/question/DSA01013
// MÃ GRAY 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    string res = "";
    res.push_back(s[0]);
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != res.back())
            res.push_back('1');
        else
            res.push_back('0');
    }
    cout << res;
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
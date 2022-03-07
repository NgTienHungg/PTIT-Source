// https://code.ptit.edu.vn/student/question/DSA01017
// MÃ GRAY 3

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    string res(1, s[0]);
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != s[i - 1])
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
// https://code.ptit.edu.vn/student/question/DSA02031
// GHÉP CHỮ CÁI

#include <bits/stdc++.h>
using namespace std;

char c;
string s;
int vs[127];

bool isConsonat(char c) {
    return (c != 'A' && c != 'E');
}

void solve() {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A' || s[i] == 'E') {
            if (i > 0 && i < s.length() - 1 && isConsonat(s[i - 1]) && isConsonat(s[i + 1]))
                return;
        }
    }
    cout << s << endl;
}

void Try(char i) {
    for (char j = 'A'; j <= c; ++j) {
        if (!vs[j]) {
            vs[j] = 1;
            s.push_back(j);
            if (s.length() == c - 'A' + 1) solve();
            else Try(i + 1);
            vs[j] = 0;
            s.pop_back();
        }
    }
}

void testCase() {
    cin >> c;
    Try('A');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
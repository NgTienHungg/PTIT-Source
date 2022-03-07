// https://code.ptit.edu.vn/student/question/CTDL_001
// THUẬT TOÁN SINH

#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void solve() {
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (rs == s) {
        for (char i : s) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        s[i] = j + '0';
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
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
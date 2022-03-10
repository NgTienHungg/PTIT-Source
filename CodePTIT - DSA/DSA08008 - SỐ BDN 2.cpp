// https://code.ptit.edu.vn/student/question/DSA08008
// SỐ BDN 2

#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("1");
    while (true) {
        string s = q.front();
        q.pop();

        if (check(s, n)) {
            cout << s;
            return;
        }

        q.push(s + "0");
        q.push(s + "1");
    }
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
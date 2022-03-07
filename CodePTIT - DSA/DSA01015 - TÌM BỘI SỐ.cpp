// https://code.ptit.edu.vn/student/question/DSA01015
// TÌM BỘI SỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("9");

    while (true) {
        string s = q.front();
        q.pop();

        int x = 0;
        for (char i : s) {
            x = x * 10 + (i - '0');
            x %= n;
        }
        if (x == 0) {
            cout << s << endl;
            return;
        }
        q.push(s + '0');
        q.push(s + '9');
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
// https://code.ptit.edu.vn/student/question/DSA08007
// SỐ BDN 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    int res = 0;
    queue<string> q;
    q.push("1");
    while (!q.empty()) {
        string z = q.front();
        q.pop();
        res++;

        string x = z + "0";
        if (x.length() > s.length() || (x.length() == s.length() && x > s))
            break;
        q.push(x);

        x = z + "1";
        if (x.length() > s.length() || (x.length() == s.length() && x > s))
            break;
        q.push(x);
    }
    cout << res + q.size();
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
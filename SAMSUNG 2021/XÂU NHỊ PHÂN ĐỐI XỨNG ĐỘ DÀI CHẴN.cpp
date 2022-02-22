#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string t(s.rbegin(), s.rend());
    return s + t;
}

void TestCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");
    vector<string> res;
    while (!q.empty()) {
        string t = q.front(); q.pop();
        if (t.length() * 2 > n) break;
        if (t != "") res.push_back(solve(t));
        q.push(t + '0');
        q.push(t + '1');
    }
    for (string s : res) cout << s << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
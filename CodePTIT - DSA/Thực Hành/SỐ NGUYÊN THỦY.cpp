#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s + t;
}

void testCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        if (s != "") {
            cout << solve(s) << " ";
            n--;
            if (n == 0) break;
        }
        q.push(s + "4");
        q.push(s + "5");
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
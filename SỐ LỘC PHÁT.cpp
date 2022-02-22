#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    queue<string> q;
    q.push("");
    vector<string> res;
    while (!q.empty()) {
        string t = q.front(); q.pop();
        res.push_back(t);
        if (t.length() == n) continue;
        q.push(t + '6');
        q.push(t + '8');
    }
    cout << res.size() - 1 << endl;
    for (int i = res.size() - 1; i > 0; --i) {
        cout << res[i] << " ";
    }
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
// https://code.ptit.edu.vn/student/question/DSA01009
// XÂU AB ĐẶC BIỆT

#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;
vector<string> res;

void solve() {
    string z(k, 'A');
    int pos = s.find(z, 0);
    if (pos != -1) {
        string sub = s.substr(pos + 1);
        if (sub.find(z) == -1)
        res.push_back(s);
    }
}

void Try(int i) {
    for (char j = 'A'; j <= 'B'; ++j) {
        s[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    s.resize(n);
    Try(0);
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for (string i : res) cout << i << "\n";
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
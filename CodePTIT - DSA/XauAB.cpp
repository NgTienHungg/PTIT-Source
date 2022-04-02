#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void Try(int i) {
    if (i == n) {
        res.push_back(s);
        return;
    }
    for (int j = 0; j <= 1; ++j) {
        s[i] = j + 'A';
        Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    res.clear();
    Try(0);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i];
        if (i != res.size() - 1) {
            cout << ",";
        }
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
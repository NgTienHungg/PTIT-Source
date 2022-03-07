// https://code.ptit.edu.vn/student/question/DSA01026
// PHÁT LỘC

#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void solve() {
    if (s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1) {
        res.push_back(s);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = '6';
        else s[i] = '8';
        if (i == n - 1) solve();
        else Try( i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) {
        cout << i << endl;
    }
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
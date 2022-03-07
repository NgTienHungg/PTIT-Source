// https://code.ptit.edu.vn/student/question/DSA02022
// NGÀY ĐẶC BIỆT

#include <bits/stdc++.h>
using namespace std;

string s(8, '0');
vector<string> res;

void solve() {
    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(2, 2));
    int y = stoi(s.substr(4));
    if (d > 0 && d <= 31 && m > 0 && m <= 12 && y >= 2000) {
        string tmp = s;
        tmp.insert(2, 1, '/');
        tmp.insert(5, 1, '/');
        res.push_back(tmp);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = '0';
        else s[i] = '2';

        if (i == 7) solve();
        else Try(i + 1);
    }
}

void testCase() {
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) cout << i << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
    }
    return 0;
}
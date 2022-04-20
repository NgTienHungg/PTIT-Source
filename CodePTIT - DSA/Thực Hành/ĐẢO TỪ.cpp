#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string str, s;
    getline(cin, str);
    vector<string> v;
    stringstream ss(str);
    while (ss >> s) {
        reverse(s.begin(), s.end());
        v.push_back(s);
    }
    for (string i : v) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// 2
// ABC DEF
// 123 456
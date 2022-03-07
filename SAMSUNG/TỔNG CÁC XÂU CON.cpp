#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; cin >> s;
    long long ans = 0;

    for (int i = 0; i < s.length(); ++i) {
        for (int j = i; j < s.length(); ++j) {
            string temp = s.substr(i, j - i + 1);
            ans += stoll(temp);
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
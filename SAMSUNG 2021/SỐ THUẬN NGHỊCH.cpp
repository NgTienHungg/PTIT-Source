#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

void chan(int i) {
    int len = 0;
    int l = i, r = i + 1;
    while (l >= 0 && r < s.length()) {
        if (s[l] != s[r]) break;
        len += 2;
        l--, r++;
    }
    ans = max(ans, len);
}

void le(int i) {
    int len = 1;
    int l = i - 1, r = i + 1;
    while (l >= 0 && r < s.length()) {
        if (s[l] != s[r]) break;
        len += 2;
        l--, r++;
    }
    ans = max(ans, len);
}

void TestCase() {
    cin >> s;
    ans = 0;
    for (int i = 0; i < s.length(); ++i) {
        chan(i); le(i);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
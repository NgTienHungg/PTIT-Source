#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    cin >> s;
    int rem = 0;
    for (int i = s.length() - 2; i >= 0; --i) {
        int x = s[i] - '0';
        int y = s[i + 1] - '0' + rem;
        if (y >= 5) x++;
        if (x > 9) {
            x = 0;
            rem = 1;
        }
        s[i] = x + '0';
        s[i + 1] = '0';
    }
    if (rem == 1) cout << rem;
    cout << s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
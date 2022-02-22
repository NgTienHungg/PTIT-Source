#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

bool isDivisible(string s, int n) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = x * 10 + (s[i] - '0');
        x %= n;
    }
    return x == 0;
}

void TestCase() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return;
    }

    queue<string> q;
    q.push("1");
    while (!q.empty()) {
        string s = q.front();
        q.pop();

        // Xét back() như này sẽ tối ưu hơn là xét front()
        string x = s + '0';
        q.push(x);
        if (isDivisible(x, n)) {
            cout << x;
            return;
        }

        string y = s + '1';
        q.push(y);
        if (isDivisible(y, n)) {
            cout << y;
            return;
        }
    }
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
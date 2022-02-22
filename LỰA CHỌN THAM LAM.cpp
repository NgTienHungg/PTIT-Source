#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

string MIN(int n, int s) {
    string ans(n, '0');
    ans[0] = '1', s -= 1;
    for (int i = n - 1; i >= 0; --i) {
        int x = min(9, s);
        ans[i] += x;
        s -= x;
        if (s == 0) break;
    }
    return ans;
}

string MAX(int n, int s) {
    string ans(n, '0');
    for (int i = 0; i < n; ++i) {
        int x = min(9, s);
        ans[i] += x;
        s -= x;
        if (s == 0) break;
    }
    return ans;
}

void TestCase() {
    int n, s;
    cin >> n >> s;

    if (s == 0 || s > 9 * n) {
        cout << "-1 -1";
        return;
    }

    cout << MIN(n, s) << " " << MAX(n, s);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
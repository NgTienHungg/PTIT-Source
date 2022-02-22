#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    if (s[0] == '0')
        return -1;
    int num = 0, d[127] = {0};
    for (int i = 0; i < s.length(); ++i) {
        if (d[s[i]] == 1)
            return -1;
        d[s[i]] = 1;
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

void TestCase() {
    int l, r, ans = 0;
    cin >> l >> r;

    queue<string> q;
    q.push("");

    while (!q.empty()) {
        string s = q.front();
        q.pop();

        for (char i = '0'; i <= '5'; ++i) {
            int num = solve(s + i);
            if (num != -1) {
                q.push(s + i);
                if (num >= l && num <= r)
                    ans++;
            }
        }
    }
    cout << ans;
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

// Có thể prepare() 1 mảng đã giải
// Sau đó với từng test, in ra f[r] - f[l - 1]
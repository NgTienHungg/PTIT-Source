#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int Power(int n, int k, int m) {
    if (k == 0) return 1;
    if (k == 1) return n % m;
    int temp = Power(n, k / 2, m);
    if (k % 2 == 1)
        return (temp * temp * n) % m;
    return (temp * temp) % m;
}

void TestCase() {
    string s; cin >> s;
    int k, b, m;
    cin >> k >> b >> m;

    int factor = Power(b, k, m);
    int ans = 0, sum = 0;

    deque<int> dq;
    dq.push_back(0);

    for (int i = 0; i < s.length(); ++i) {
        dq.push_back(s[i] - '0');
        sum = (sum * b + (s[i] - '0')) % m;

        if (i >= k - 1) {
            int cs_dau = dq.front();
            dq.pop_front();

            sum -= cs_dau * factor;
            while (sum < 0)
                sum += m;
            ans += sum;
        }
    }
    cout << ans;
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
#include <bits/stdc++.h>
using namespace std;

int countOfDigit(int n) {
    int d = 0;
    while (n) {
        n /= 10;
        d++;
    }
    return d;
}

void TestCase() {
    int a, b;
    cin >> a >> b;
    int n = countOfDigit(a);
    int Sta = 0;
    for (int i = 1; i < n; ++i) {
        Sta = Sta * 10 + 4;
    }

    long long ans = 0;
    queue<int> q;
    q.push(Sta);
    while (!q.empty()) {
        int t = q.front(); q.pop();
        if (t > b) break;
        if (t >= a) ans += t;
        q.push(t * 10 + 4);
        q.push(t * 10 + 7);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
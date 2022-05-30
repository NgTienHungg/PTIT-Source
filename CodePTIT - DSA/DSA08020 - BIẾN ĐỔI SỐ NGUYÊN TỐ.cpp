// https://code.ptit.edu.vn/student/question/DSA08020
// BIẾN ĐỔI SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(1e5, 1);

void Sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < 1e5; ++i) {
        if (prime[i]) {
            for (int j = i * i; j < 1e5; j += i) {
                prime[j] = false;
            }
        }
    }
}

int to_int(string s) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = x * 10 + (s[i] - '0');
    }
    return x;
}

void TestCase() {
    string a, b;
    cin >> a >> b;

    vector<bool> dd(1e5, false);
    queue<pair<string, int>> q;
    q.push({a, 0});
    while (!q.empty()) {
        string s = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (s == b) {
            cout << cnt;
            return;
        }

        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j <= 9; ++j) {
                if ((i == 0 && j == 0) || j == (s[i] - '0'))
                    continue;
                string tmp = s;
                tmp[i] = j + '0';
                int num = to_int(tmp);
                if (prime[num] && !dd[num]) {
                    q.push({tmp, cnt + 1});
                    dd[num] = true;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Sieve();
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
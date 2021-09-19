// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/C
// C. [ProPTIT-Algorithm-Queue] Biến đổi số nguyên tố

#include <bits/stdc++.h>
using namespace std;

vector<bool> e(1e5, 1); // Sàng nguyên tố
void eratosthenes()
{
    for (int i = 2; i * i < 1e5; ++i) {
        if (e[i]) {
            for (int j = i * i; j < 1e5; j += i) {
                e[j] = 0;
            }
        }
    }
}

int to_int(string s) {
    int r = 0;
    for (int i = 0; i < 4; ++i) {
        r = r * 10 + (s[i] - '0');
    }
    return r;
}

void TestCase()
{
    string a, b;
    cin >> a >> b;
    
    vector<bool> dd(1e5, 0);
    queue<string> q;
    q.push(a);
    queue<int> res;
    res.push(0);

    while (1) {
        if (q.front() == b) {
            cout << res.front() << endl;
            return;
        }

        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j <= 9; ++j) {
                string temp = q.front();
                int count = res.front();

                if ((i == 0 && j == 0) || j == (temp[i] - '0'))
                    continue;

                temp[i] = j + '0';
                int num = to_int(temp);
                if (e[num] && !dd[num]) {
                    q.push(temp);
                    res.push(count + 1);
                    dd[num] = 1;
                }
            }
        }

        q.pop();
        res.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    eratosthenes();

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
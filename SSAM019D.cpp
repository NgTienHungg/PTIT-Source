// https://www.spoj.com/PTIT/problems/SSAM019D/
// SSAM019D - TÌM BỘI SỐ

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("9");
    while (1)
    {
        string s = q.front();
        int x = 0;
        for (int i = 0; i < s.length(); ++i) {
            x = x * 10 + (s[i] - '0');
            x %= n;
        }
        if (x == 0) {
            cout << s << endl;
            return;
        }
        q.push(s + '0');
        q.push(s + '9');
        q.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
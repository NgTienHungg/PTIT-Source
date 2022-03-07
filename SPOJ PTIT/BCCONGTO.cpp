// https://www.spoj.com/PTIT/problems/BCCONGTO/
// BCCONGTO - Công - tơ - mét

#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    long long num = stoi(s);
    long long res = 0; // Số công-tơ chính xác
    for (int i = 0; i < s.length(); ++i)
    {
        int dig = int(s[i] - '0');
        if (dig >= 4)
            dig -= 1;
        res = res * 9 + dig;
    }
    cout << num << ": " << res << endl;
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0")
            break;
        solve(s);
    }
    return 0;
}
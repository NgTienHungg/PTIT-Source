// https://www.spoj.com/PTIT/problems/P153PROI/
// P153PROI - ROUND 3I - Mã hóa xâu

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s = {};
    getline(cin, s);
    vector<int> dd(26, 0); // dd: đánh dấu
    string res = {};       // xâu kq
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            if (dd[s[i] - 'a'] == 0)
                res.push_back(s[i]);
            dd[s[i] - 'a']++;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (dd[i] > 1)
            count += dd[i];
    }
    cout << count << " " << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
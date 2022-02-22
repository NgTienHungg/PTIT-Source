// https://www.spoj.com/PTIT/problems/PTIT135I/
// PTIT135I - Nhìn và đọc

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        char tmp = s[i];
        int count = 0;
        while (s[i + 1] == tmp)
        {
            count++;
            i++;
        }
        v.push_back(count + 1);
        v.push_back(tmp - '0');
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
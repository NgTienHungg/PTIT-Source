// https://www.spoj.com/PTIT/problems/PTIT127G/
// PTIT127G - Tách số

#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            string temp = "";
            int j = i;
            while (s[j] >= '0' && s[j] <= '9' && j < s.length())
                temp = temp + s[j++];
            while (temp[0] == '0' && temp.length() > 1)
                temp.erase(0, 1);
            v.push_back(temp);
            i = j;
        }
    }
}

bool cmp(string a, string b)
{
    while (a.length() < b.length())
        a = '0' + a;
    while (b.length() < a.length())
        b = '0' + b;
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
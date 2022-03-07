// https://www.spoj.com/PTIT/problems/P151PROH/
// P151PROH - ROUND 1H - Số ma thuật

#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if (s[0] != '1')
        return 0;
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
        {
            dem++;
            if (dem > 2)
                return 0;
        }
        else
            dem = 0;
    }
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '1' && s[i] != '4')
            return 0;
    return 1;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
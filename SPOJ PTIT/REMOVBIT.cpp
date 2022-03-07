// https://www.spoj.com/PTIT/problems/REMOVBIT/
// REMOVBIT - Xóa bit

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s.erase(i, 1);
            break;
        }
    }
    if (s.length() == len)
        s.resize(len - 1);
    cout << s;
    return 0;
}
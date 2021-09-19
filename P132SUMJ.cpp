// https://www.spoj.com/PTIT/problems/P132SUMJ/
// P132SUMJ - SUM2 J - Hoán vị chữ số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    bool kt = 0;
    int vt;
    if (len == 1)
    {
        cout << 0;
        return 0;
    }
    for (int i = len - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
        {
            kt = 1;
            vt = i;
            break;
        }
    }
    if (kt == 0)
        cout << 0;
    else
    {
        string tmp = s.substr(vt);
        for (int i = tmp.length() - 1; i >= 1; i--)
        {
            if (tmp[i] > tmp[0])
            {
                swap(tmp[i], tmp[0]);
                break;
            }
        }
        sort(tmp.begin() + 1, tmp.end());
        s.replace(vt, tmp.size(), tmp);
        cout << s;
    }
    return 0;
}
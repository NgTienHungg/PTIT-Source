// https://www.spoj.com/PTIT/problems/P161PROD/
// P161PROD - ROUND 1D - Câu chuyện tình yêu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    string s;
    cin >> s;
    string a = "qwertyuiop";
    string b = "asdfghjkl;";
    string c = "zxcvbnm,./";
    int d;
    if (x == 'L')
        d = 1;
    else
        d = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (a.find(s[i]) != -1)
        {
            int vt = a.find(s[i]);
            s[i] = a[vt + d];
            continue;
        }
        if (b.find(s[i]) != -1)
        {
            int vt = b.find(s[i]);
            s[i] = b[vt + d];
            continue;
        }
        int vt = c.find(s[i]);
        s[i] = c[vt + d];
    }
    cout << s;
}
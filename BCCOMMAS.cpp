// https://www.spoj.com/PTIT/problems/BCCOMMAS/
// BCCOMMAS - Chèn dấu phẩy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    string res = {};
    int i = len - 3;
    while (i > 0)
    {
        res = "," + s.substr(i, 3) + res;
        s.erase(i, 3);
        i -= 3;
    }
    res = s + res;
    cout << res;
    return 0;
}
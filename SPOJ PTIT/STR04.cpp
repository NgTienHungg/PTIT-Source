// https://luyencode.net/problem/STR04
// STR04 - Tần suất xuất hiện các ký tự

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int d[127] = {0};
    for (auto x : s)
    {
        if (x >= 'A' && x <= 'Z')
            d[x + 32]++;
        else
            d[x]++;
    }
    for (int i = '0'; i <= '9'; ++i)
    {
        if (d[i] > 0)
            cout << char(i) << " " << d[i] << endl;
    }
    for (int i = 'a'; i <= 'z'; ++i)
    {
        if (d[i] > 0)
            cout << char(i) << " " << d[i] << endl;
    }
    return 0;
}
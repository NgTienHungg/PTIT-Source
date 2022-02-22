// https://www.spoj.com/PTIT/problems/P133SUMH/
// P133SUMH - SUM3 H - Chuyển đổi cơ số nhị phân sang cơ số 8

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int convert(string s)
{
    return (s[0] - '0') * 4 + (s[1] - '0') * 2 + (s[2] - '0') * 1;
}

int main()
{
    string s;
    cin >> s;
    while (s.length() % 3)
        s = "0" + s;
    for (int i = 0; i < s.length(); i += 3)
    {
        string str = s.substr(i, 3);
        cout << convert(str);
    }
    return 0;
}
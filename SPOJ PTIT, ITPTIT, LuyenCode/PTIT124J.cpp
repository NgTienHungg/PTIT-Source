// https://www.spoj.com/PTIT/problems/PTIT124J/
// PTIT124J - Chuyển đổi hệ cơ số (bản dễ)

#include <bits/stdc++.h>
using namespace std;

int change(string str)
{
    return (str[0] - '0') * 4 + (str[1] - '0') * 2 + (str[2] - '0') * 1;
}

int main()
{
    string s;
    cin >> s;
    while (s.length() % 3)
        s = "0" + s;
    int len = s.length();
    for (int i = 0; i < len; i += 3)
    {
        string str = s.substr(i, 3);
        cout << change(str);
    }
    return 0;
}
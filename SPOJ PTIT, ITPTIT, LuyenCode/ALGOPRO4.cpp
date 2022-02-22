// https://www.spoj.com/PTIT/problems/ALGOPRO4/
// ALGOPRO4 - Cơ số

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    while (s.length() % 3 != 0)
        s = "0" + s;
    for (int i = 0; i < s.length(); i += 3)
    {
        string str = s.substr(i, 3);
        cout << 4 * (str[0] - '0') + 2 * (str[1] - '0') + 1 * (str[2] - '0');
    }
    return 0;
}
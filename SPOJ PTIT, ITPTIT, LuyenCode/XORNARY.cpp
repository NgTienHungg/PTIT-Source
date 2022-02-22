// https://luyencode.net/problem/XORNARY
// XORNARY - Phép XOR trên dãy nhị phân

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string s;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] != b[i])
            s.push_back('1');
        else
            s.push_back('0');
    }
    while (s.front() == '0' && s.length() > 1)
        s.erase(0, 1);
    cout << s;
    return 0;
}
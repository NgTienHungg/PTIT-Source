// https://luyencode.net/problem/VL18
// VL18 - Tìm số đảo ngược

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    while (s[0] == '0')
        s.erase(0, 1);
    cout << s;
    return 0;
}
// https://luyencode.net/problem/STR01
// STR01 - Chuyển chuỗi về viết thường

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i)
        s[i] = tolower(s[i]);
    cout << s;
    return 0;
}
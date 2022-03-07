// https://luyencode.net/problem/STR03
// STR03 - Đếm số lượng ký tự

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i)
        s[i] = tolower(s[i]);

    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        c = tolower(c);
        int d = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == c)
                d++;
        }
        cout << d << endl;
    }
    return 0;
}

//! Chú ý các kí tự đặc biệt !@#$%^&* nên không dùng +- 32 được
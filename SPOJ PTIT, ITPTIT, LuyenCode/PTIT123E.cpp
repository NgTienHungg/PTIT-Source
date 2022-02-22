// https://www.spoj.com/PTIT/problems/PTIT123E/
// PTIT123E - Số vòng

#include <bits/stdc++.h>
using namespace std;

string sum(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;

    string res = "";
    int remember = 0;
    for (int i = len - 1; i >= 0; --i)
    {
        int digit = (a[i] - '0') + (b[i] - '0') + remember;
        remember = digit / 10;
        res = char(digit % 10 + '0') + res;
    }

    if (remember > 0)
        res = char(remember + '0') + res;
    return res;
}

int main()
{
    string s;
    while (cin >> s)
    {
        int len = s.length();

        /* Tạo các số vòng và tính tổng chúng */
        vector<string> cyclics;
        for (int i = 0; i < len; ++i)
        {
            string temp = "";
            for (int j = 0; j < len; ++j)
                temp = temp + s[(i + j) % len];
            cyclics.push_back(temp);
        }
        string Sum1 = "";
        for (int i = 0; i < len; ++i)
            Sum1 = sum(Sum1, cyclics[i]);

        /* Tính tổng các số vòng theo định nghĩa */
        string Sum2 = "";
        int count = len * (len + 1) / 2;
        while (count--)
            Sum2 = sum(Sum2, s);

        /* Output */
        if (Sum1 == Sum2)
            cout << s << " is cyclic";
        else
            cout << s << " is not cyclic";
        cout << endl;
    }
    return 0;
}
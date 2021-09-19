// https://www.spoj.com/PTIT/problems/P165PROG/
// P165PROG - ROUND 5G - Số nguyên

#include <bits/stdc++.h>
using namespace std;

bool LonHon(string a, string b)
{
    if (a.length() < b.length())
        a = "0" + a;
    if (a.length() > b.length())
        b = "0" + b;
    if (a >= b)
        return 1;
    return 0;
}

bool NhoHon(string a, string b)
{
    if (a.length() < b.length())
        a = "0" + a;
    if (a.length() > b.length())
        b = "0" + b;
    if (a <= b)
        return 1;
    return 0;
}

int main()
{
    string s;
    cin >> s;
    if (LonHon(s, "-128") && NhoHon(s, "127"))
        cout << "byte";
    else if (LonHon(s, "-32768") && NhoHon(s, "32767"))
        cout << "short";
    else if (LonHon(s, "-2147483648") && NhoHon(s, "2147483647"))
        cout << "int";
    else if (LonHon(s, "-9223372036854775808") && NhoHon(s, "9223372036854775808"))
        cout << "long";
    else
        cout << "BigInteger";
    return 0;
}
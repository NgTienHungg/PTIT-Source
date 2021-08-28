// https://www.spoj.com/PTIT/problems/P162SUMH/
// P162SUMH - Round 2H - Quay số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int d = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
            d += 3;
        if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
            d += 4;
        if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
            d += 5;
        if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
            d += 6;
        if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
            d += 7;
        if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
            d += 8;
        if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
            d += 9;
        if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
            d += 10;
    }
    cout << d;
    return 0;
}
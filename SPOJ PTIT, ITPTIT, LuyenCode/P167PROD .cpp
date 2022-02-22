// https://www.spoj.com/PTIT/problems/P167PROD/
// P167PROD - ROUND 7D - ABC

#include <bits/stdc++.h>
using namespace std;

void TH1(string a, string b, string c)
{
    int B = atoi(b.c_str());
    int C = atoi(c.c_str());
    string str = to_string(C - B);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '?')
        {
            cout << str[i];
            break;
        }
    }
}

void TH2(string a, string b, string c)
{
    int A = atoi(a.c_str());
    int C = atoi(c.c_str());
    string str = to_string(C - A);
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '?')
        {
            cout << str[i];
            break;
        }
    }
}

void TH3(string a, string b, string c)
{
    int A = atoi(a.c_str());
    int B = atoi(b.c_str());
    string str = to_string(A + B);
    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == '?')
        {
            cout << str[i];
            break;
        }
    }
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    if (a.find("?") != -1)
        TH1(a, b, c);
    else if (b.find("?") != -1)
        TH2(a, b, c);
    else
        TH3(a, b, c);
    return 0;
}
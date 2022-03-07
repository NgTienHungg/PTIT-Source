// https://www.spoj.com/PTIT/problems/P145SUMA/
// P145SUMA - ROUND 5A - Chiếc vé may mắn

#include <bits/stdc++.h>
using namespace std;

int sumCS(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '4' && s[i] != '7')
            return -1;
        sum += s[i] - '0';
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.resize(n);
    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2);
    if (sumCS(s1) == sumCS(s2) && sumCS(s1) != -1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
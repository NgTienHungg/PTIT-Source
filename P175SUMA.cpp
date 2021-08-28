// https://www.spoj.com/PTIT/problems/P175SUMA/
// P175SUMA - ROUND 5A - Biến đổi về xâu Palindrome

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int len = s.length();
    int giong = 0, khac = 0;
    for (int i = 0; i < len / 2; ++i)
    {
        if (s[i] == s[len - 1 - i])
            giong++;
        else
            khac++;
    }

    if (k == len)
        cout << "Yes";
    else if (k < khac)
        cout << "No";
    else if (k >= khac && k < len)
    {
        if (k <= 2 * khac)
            cout << "Yes";
        else
        {
            k -= 2 * khac;
            if (k % 2 == 0 && k / 2 <= giong)
                cout << "Yes";
            else
                cout << "No";
        }
    }
    else
        cout << "No";
    return 0;
}
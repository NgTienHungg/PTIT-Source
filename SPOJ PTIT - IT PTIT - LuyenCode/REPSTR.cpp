// https://www.spoj.com/PTIT/problems/REPSTR/
// REPSTR - Replacing Digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, s;
    cin >> a >> s;
    sort(s.rbegin(), s.rend());
    int n = 0;
    for (int i = 0; i <= a.length(); i++)
        if (a[i] < s[n])
            a[i] = s[n++];
    cout << a;
    return 0;
}
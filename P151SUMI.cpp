// https://www.spoj.com/PTIT/problems/P151SUMI/
// P151SUMI - ROUND 1I - Bóng đá

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1 = "";
    string s2 = "";
    vector<string> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (s1 == "")
            s1 = v[i];
        else if (v[i] != s1 && s2 == "")
            s2 = v[i];
    }
    int dem1 = 0, dem2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == s1)
            dem1++;
        if (v[i] == s2)
            dem2++;
    }
    if (dem1 > dem2)
        cout << s1;
    else
        cout << s2;
    return 0;
}
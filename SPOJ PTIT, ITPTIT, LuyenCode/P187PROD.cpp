// https://www.spoj.com/PTIT/problems/P187PROD/
// P187PROD - ROUND 7D - VÒNG TRÒN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[127] = {0}, b[127] = {0}, check[127] = {0};
    for (int i = 0; i < 52; i++)
    {
        if (check[s[i]] == 0)
        {
            a[s[i]] = i;
            check[s[i]] = 1;
        }
        else
            b[s[i]] = i;
    }
    int count = 0;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            if (a[i] < a[j] && a[j] < b[i] && b[i] < b[j])
                count++;
        }
    }
    cout << count;
    return 0;
}
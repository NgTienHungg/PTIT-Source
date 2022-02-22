// https://www.spoj.com/PTIT/problems/P144SUMA/
// P144SUMA - ROUND 4A - Nam châm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i][0] == a[i - 1][1])
            count++;
    }
    cout << count;
    return 0;
}
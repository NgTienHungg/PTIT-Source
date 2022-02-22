// https://www.spoj.com/PTIT/problems/P146SUMB/
// P146SUMB - ROUND 6B - Tập vẽ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << j << " ";
        for (int j = i - 1; j >= 0; j--)
            cout << j << " ";
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << j << " ";
        for (int j = i - 1; j >= 0; j--)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
// https://www.spoj.com/PTIT/problems/P141PROC/
// P141PROC - ROUND 1C - BIT operator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int res = 0;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
            res++;
        else if (s == "X--" || s == "--X")
            res--;
    }
    cout << res;
    return 0;
}
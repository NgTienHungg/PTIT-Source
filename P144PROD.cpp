// https://www.spoj.com/PTIT/problems/P144PROD/
// P144PROD - ROUND 4D - Hàng cây

#include <bits/stdc++.h>
using namespace std;

void change(string &s)
{
    while (s[0] == '0')
        s.erase(0, 1);
}

int cmp(string a, string b)
{
    if (a.length() > b.length())
        return 1;
    else if (a.length() < b.length())
        return -1;
    else
    {
        if (a > b)
            return 1;
        else if (a < b)
            return -1;
        else
            return 0;
    }
}

int main()
{
    int t = 1;
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            change(a[i]);
        }
        bool check = 0;
        string Min = a[0], Max = a[0];
        for (int i = 0; i < n; i++)
        {
            if (cmp(Min, a[i]) == 1)
                Min = a[i];
            if (cmp(Max, a[i]) == -1)
                Max = a[i];
        }
        cout << "Case " << t++ << ": ";
        if (cmp(Min, Max) == 0)
            cout << "There is a row of trees having equal height." << endl;
        else
            cout << Min << " " << Max << endl;
    }
    return 0;
}
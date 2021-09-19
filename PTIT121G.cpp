// https://www.spoj.com/PTIT/problems/PTIT121G/
// PTIT121G - Quan hệ

#include <bits/stdc++.h>
using namespace std;

void init(int a[105][105], int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
}

bool check(int a[105][105], int n)
{
    vector<int> N1;
    vector<int> N2;
    for (int i = 1; i <= n; i++)
    {
        int kt1 = 0;
        for (int j = 0; j < N1.size(); j++)
            if (a[i][N1[j]] == 1)
            {
                kt1 = 1;
                break;
            }
        int kt2 = 0;
        for (int j = 0; j < N2.size(); j++)
            if (a[i][N2[j]] == 1)
            {
                kt2 = 1;
                break;
            }
        if (kt1 == 1 && kt2 == 0)
            N2.push_back(i);
        else if (kt1 == 0 && kt2 == 1)
            N1.push_back(i);
        else if (kt1 == 1 && kt2 == 1)
            return 0;
        else
            N1.push_back(i);
    }
    return 1;
}

int main()
{
    int n;
    int a[105][105];
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        init(a, n);
        if (check(a, n) == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
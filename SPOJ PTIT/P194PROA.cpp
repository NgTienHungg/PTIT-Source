// https://www.spoj.com/PTIT/problems/P194PROA/
// P194PROA - Problem A - Teamwork

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int dem = 0;
        for (int j = 1; j <= 3; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
                dem++;
        }
        if (dem >= 2)
            count++;
    }
    cout << count;
    return 0;
}
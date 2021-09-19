// https://www.spoj.com/PTIT/problems/PTIT135G/
// PTIT135G - Blackjack

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum, max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if (sum <= m && sum > max)
                    max = sum;
            }
        }
    }
    cout << max;
    return 0;
}
// https://www.spoj.com/PTIT/problems/P191PROB/
// P191PROB - Problem B - Tổng hai số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((v[i] + v[j]) == m)
                count++;
        }
    }
    cout << count;
    return 0;
}
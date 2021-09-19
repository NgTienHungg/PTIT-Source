// https://www.spoj.com/PTIT/problems/BCBEADS/
// BCBEADS - Đếm hạt

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
            count++;
    }
    cout << count;
    return 0;
}
// https://www.spoj.com/PTIT/problems/PTIT127F/
// PTIT127F - Xếp sách

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int count = 0;
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == n)
            n--;
        else
            count++;
    }
    cout << count;
    return 0;
}
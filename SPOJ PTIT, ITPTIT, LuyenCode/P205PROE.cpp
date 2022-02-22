// https://www.spoj.com/PTIT/problems/P205PROE/
// P205PROE - CHIẾC KHÓA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs(a[i] - b[i]);
        if (d <= 5)
            count += d;
        else
            count += 10 - d;
    }
    cout << count;
    return 0;
}
// https://www.spoj.com/PTIT/problems/P164PROG/
// P164PROG - ROUND 4G - Kim tự tháp

#include <bits/stdc++.h>
using namespace std;

int a[10001] = {0};
void CongDon()
{
    for (int i = 1; i <= 10000; i++)
    {
        a[i] = i;
        a[i] += a[i - 1];
    }
}

int main()
{
    CongDon();
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= 10000; i++)
    {
        if (n < a[i])
            break;
        count++;
        n -= a[i];
    }
    cout << count;
    return 0;
}
// https://www.spoj.com/PTIT/problems/P134SUME/
// P134SUME - SUM4 E - Diện tích hình chữ nhật lớn nhất

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a, a + 4);
    cout << a[0] * a[2];
    return 0;
}
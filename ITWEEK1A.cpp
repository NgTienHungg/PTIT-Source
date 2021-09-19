// https://code.itptit.com/problems/100023
// Tổng số lẻ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        n -= 1;
    int count = (n - 1) / 2 + 1;
    cout << (n + 1) * count / 2;
    return 0;
}
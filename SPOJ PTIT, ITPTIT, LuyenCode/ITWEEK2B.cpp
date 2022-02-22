// https://code.itptit.com/problems/100043
// Cộng trừ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << (n - 1) / 2 - n;
    return 0;
}
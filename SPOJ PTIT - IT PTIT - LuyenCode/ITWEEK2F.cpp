// https://code.itptit.com/problems/100047
// Chữ số thứ N

#include <bits/stdc++.h>
using namespace std;

void TH1(int n)
{
    cout << n;
}

void TH2(int n)
{
    int d = n - 9;
    int num = ceil((double)d / (double)2) + 9;
    if (d % 2 == 0)
        cout << num % 10;
    else
        cout << num / 10;
}

void TH3(int n)
{
    int d = n - 189;
    int num = ceil((double)d / (double)3) + 99;
    if (d % 3 == 0)
        cout << num % 10;
    else if (d % 3 == 1)
        cout << num / 100;
    else
        cout << (num / 10) % 10;
}

int main()
{
    int n;
    cin >> n;
    if (n <= 9)
        TH1(n);
    else if (n > 9 && n <= 189)
        TH2(n);
    else
        TH3(n);
    return 0;
}
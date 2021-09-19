// https://www.spoj.com/PTIT/problems/ALGOPRO5/
// ALGOPRO5 - Lucky number

#include <bits/stdc++.h>
using namespace std;

long long poww(int n)
{
    long long res = 1;
    while (n--)
        res *= 2;
    return res;
}

int main()
{
    int n;
    cin >> n;
    long long count = 0;
    for (int i = 1; i <= n; i++)
        count += poww(i);
    cout << count;
}
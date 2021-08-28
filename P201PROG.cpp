// https://www.spoj.com/PTIT/problems/P201PROG/
// P201PROG - Sai số của số thực

#include <bits/stdc++.h>

using namespace std;
long long f[100] = {0};

long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (f[n] != 0)
        return f[n];
    f[n] = fibo(n - 1) + fibo(n - 2);
    return f[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}

//? Công thức của Fibonacci
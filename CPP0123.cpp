// https://code.ptit.edu.vn/student/question/CPP0123
// KIỂM TRA NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    isPrime(n) ? cout << "YES" : cout << "NO";
    return 0;
}
// https://code.itptit.com/problems/100059
// Khai báo y tế đầy đủ

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b > 0)
    {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long x = a[0]; // Ước chung lớn nhất
    for (int i = 1; i < n; ++i)
    {
        x = gcd(x, a[i]);
        if (x == 1)
            break;
    }

    int count = 0; // Só ước của x cũng là số ước chung của các phần tử trong mảng
    for (int i = 1; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
        {
            count += 2;
            if (i * i == x)
                count -= 1;
        }
    }
    cout << count;
    return 0;
}
// https://luyencode.net/problem/UOC1
// UOC1 - Tính tổng ước 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    long long s = 0;
    for (int i = 1; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
        {
            if (b % i != 0)
                s += i;
            if (i * i != a && b % (a / i) != 0)
                s += a / i;
        }
    }
    cout << s;
    return 0;
}
// https://luyencode.net/problem/UOC2https://luyencode.net/problem/UOC2
// UOC2 - Tính tổng ước 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    long long s = 0;
    for (int i = 1; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
                s += i;
            if (b % (a / i) == 0 && i * i != a)
                s += a / i;
        }
    }
    cout << s;
    return 0;
}
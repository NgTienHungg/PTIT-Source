// https://luyencode.net/problem/VT09
// VT09 - Tìm số nguyên tố trong mảng

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
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (isPrime(x))
            s.insert(x);
    }
    for (auto it : s)
        cout << it << " ";
    return 0;
}

// auto áp dụng cho C++ 17 trở lên
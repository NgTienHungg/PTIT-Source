// https://luyencode.net/problem/VL12
// VL12 - Liệt kê các ước số

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "INF";
        return 0;
    }
    if (n < 0)
        n = -n;
    vector<int> v;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
                v.push_back(n / i);
        }
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    return 0;
}
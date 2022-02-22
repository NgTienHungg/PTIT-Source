// https://luyencode.net/problem/DIGIT5
// DIGIT5 - Số chữ số 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int r = 0;
    for (int i = m; i <= n; ++i)
    {
        string s = to_string(i);
        r += count(s.begin(), s.end(), '5');
    }
    cout << r;
    return 0;
}
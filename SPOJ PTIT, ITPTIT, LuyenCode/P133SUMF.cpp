// https://www.spoj.com/PTIT/problems/P133SUMF/
// P133SUMF - SUM3 F - Cấp số cộng

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    int d1 = v[1] - v[0];
    int d2 = v[2] - v[1];
    if (d1 == d2)
        cout << v[2] + d1;
    else if (d1 > d2)
        cout << v[0] + d2;
    else
        cout << v[1] + d1;
    return 0;
}
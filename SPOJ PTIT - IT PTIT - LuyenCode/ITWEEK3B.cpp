// https://code.itptit.com/problems/100050
// Shopping

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    long long s[4];
    s[0] = d1 + d2 + d3;
    s[1] = 2 * (d1 + d2);
    s[2] = 2 * (d1 + d3);
    s[3] = 2 * (d2 + d3);
    sort(s, s + 4);
    cout << s[0];
    return 0;
}

// d1, d2 là khoảng cách, nhưng d3 là con đường (có thể cong)
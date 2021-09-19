// https://code.itptit.com/problems/100015
// Covid-19’s ending

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, v;
    cin >> a >> b >> v;
    // v <= k * (a - b) + b
    double k = (double)(v - b) / (a - b);
    long long res = (long long)ceil(k);
    cout << res;
    return 0;
}
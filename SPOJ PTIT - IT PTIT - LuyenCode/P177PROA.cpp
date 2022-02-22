// https://www.spoj.com/PTIT/problems/P177PROA/
// P177PROA - ROUND 7A - Một cái đinh rỉ !

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point
{
    ll x;
    ll y;
} O, M;

int main()
{
    ll r;
    cin >> r;
    cin >> O.x >> O.y;
    cin >> M.x >> M.y;
    double d = (double)sqrt((O.x - M.x) * (O.x - M.x) + (O.y - M.y) * (O.y - M.y)); // d = OM
    cout << ceil((double)d / (2 * r));
    return 0;
}
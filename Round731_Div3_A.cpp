// https://codeforces.com/contest/1547/problem/A
// A. Shortest Path with Obstacle

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Data
{
    int x;
    int y;
};

void TestCase()
{
    Data A, B, F;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> F.x >> F.y;

    int res;
    if (A.x == B.x)
    {
        res = abs(A.y - B.y);
        if (F.x == A.x && F.y > min(A.y, B.y) && F.y < max(A.y, B.y))
            res += 2;
    }
    else if (A.y == B.y)
    {
        res = abs(A.x - B.x);
        if (F.y == A.y && F.x > min(A.x, B.x) && F.x < max(A.x, B.x))
            res += 2;
    }
    else
        res = abs(A.x - B.x) + abs(A.y - B.y);
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
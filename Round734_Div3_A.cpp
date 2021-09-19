// https://codeforces.com/contest/1551/problem/A
// A. Polycarp and Coins

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int c1, c2;
    c1 = c2 = n / 3;
    if (n % 3 == 1)
        c1++;
    else if (n % 3 == 2)
        c2++;
    cout << c1 << " " << c2 << endl;
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
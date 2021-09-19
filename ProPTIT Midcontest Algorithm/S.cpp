// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/S
// S. J&M

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string J = "#", M = "#";

bool check(int l1, int r1, int l2, int r2)
{
    int len = r1 - l1 + 1;
    int dd1[10] = {0}, dd2[10] = {0};
    bool ok = 1;
    for (int i = 0; i < len; ++i) {
        if (J[i + l1] != M[i + l2])
            ok = 0;
        dd1[J[i + l1] - '0']++;
        dd2[M[i + l2] - '0']++;
    }
    for (int i = 0; i <= 9; ++i) {
        if (dd1[i] != dd2[i])
            return 0;
    }
    if (ok)
        return 1;
    if (len % 2 == 1)
        return 0;
    int tb1 = (l1 + r1) / 2, tb2 = (l2 + r2) / 2;
    if (check(l1, tb1, l2, tb2) && check(tb1 + 1, r1, tb2 + 1, r2))
        return 1;
    if (check(l1, tb1, tb2 + 1, r2) && check(tb1 + 1, r1, l2, tb2))
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        J.push_back(c);
    }
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        M.push_back(c);
    }

    if (check(1, n, 1, n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
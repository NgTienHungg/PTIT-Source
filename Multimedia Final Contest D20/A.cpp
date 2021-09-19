// https://codeforces.com/group/eFlt2UuXYv/contest/337144/problem/A
// A. [Multi D20] Vẽ hình.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << "*";
        cout << endl;
    }
    return 0;
}
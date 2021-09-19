// https://www.spoj.com/PTIT/problems/P135SUME/
// P135SUME - SUM5 E - Bản nhạc

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(8);
    for (int i = 0; i < 8; i++)
        cin >> v[i];
    if (v[0] == 1 && v[1] == 2 && v[2] == 3 && v[3] == 4 && v[4] == 5 && v[5] == 6 && v[6] == 7 && v[7] == 8)
        cout << "ascending";
    else if (v[0] == 8 && v[1] == 7 && v[2] == 6 && v[3] == 5 && v[4] == 4 && v[5] == 3 && v[6] == 2 && v[7] == 1)
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}
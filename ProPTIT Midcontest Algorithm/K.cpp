// https://codeforces.com/group/eFlt2UuXYv/contest/332066/problem/K
// K. Sorting

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int i = 0, j = n - 1;
    while (a[i] == b[i] && i < j)
        i++;
    while (a[j] == b[j] && j > i)
        j--;
    cout << i + 1 << " " << j + 1;
    return 0;
}
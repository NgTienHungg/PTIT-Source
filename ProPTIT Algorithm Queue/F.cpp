// https://codeforces.com/group/eFlt2UuXYv/contest/343086/problem/F
// F. [ProPTIT-Algorithm-Queue] Sorting

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    vector<int> b(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int i = 0, j = n - 1;
    while (a[i] == b[i])
        i++;
    while (a[j] == b[j])
        j--;
    cout << i + 1 << " " << j + 1;
    return 0;
}
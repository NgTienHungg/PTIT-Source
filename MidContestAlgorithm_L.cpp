/*
L. Đếm cặp

Cho 2 dãy số A=a1,a2...an và số k hãy tìm số cặp (ai,aj) có hiệu bé hơn k
Note: chỉ cần 2 số có vi trí khác nhau

Input
nhập 2 số n và k (1≤n,k≤70000)

Output
in ra số cặp thỏa mãn.

Example

input
5 5
1 2 3 4 6

output
9
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());
    long long res = 0;
    vector<int>::iterator it;
    for (int i = 0; i < n; ++i)
    {
        it = upper_bound(a.begin() + i + 1, a.end(), a[i] + k - 1);
        res += it - (a.begin() + i + 1);
    }
    cout << res;
    return 0;
}
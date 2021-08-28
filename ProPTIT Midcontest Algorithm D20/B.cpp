// https://codeforces.com/group/eFlt2UuXYv/contest/332066/probl
// B. Chuỗi hạt bồ đề

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(vector<string> v, int n)
{
    int res = 1e6;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            string str = v[j] + v[j];
            int pos = str.find(v[i]);
            if (pos == -1)
                return -1;
            count += pos;
        }
        res = min(res, count);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    cout << solve(v, n);
    return 0;
}
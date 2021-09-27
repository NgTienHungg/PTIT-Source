// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/D
// D. Kho báu - Phần 1

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        if (i < k)
            v[i] = {a[i], 1};
        else
            v[i].first = -1e6;

        for (int j = min(k, i); j >= 1; --j) {
            if (a[i] + v[i - j].first > v[i].first) {
                v[i] = {v[i - j].first + a[i], v[i - j].second + 1};
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << " " << v[0].second;
    return 0;
}
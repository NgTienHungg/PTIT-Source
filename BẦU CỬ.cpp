#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second > b.second) return 1;
    if (a.second == b.second && a.first < b.first) return 1;
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        mp[x]++;
    }

    vector<pair<int, int>> v;
    for (auto x : mp) {
        v.push_back({x.first, x.second});
    }
    sort(v.begin(), v.end(), cmp);

    int maxx = v[0].second;
    int i = 0;
    while (v[i].second == maxx && i < v.size()) i++;
    if (i == v.size()) cout << "NONE";
    else cout << v[i].first;
    return 0;
}
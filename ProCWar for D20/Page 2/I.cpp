#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if (a.length() == b.length())
        return a > b;
    return a.length() > b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    string key; cin >> key;

    map<string, bool> mp;
    mp[key] = 1;
    for (int i = 0; i < n; ++i) {
        if (v[i].first == key)
            mp[v[i].second] = 1;
        if (v[i].second == key)
            mp[v[i].first] = 1;
    }

    vector<string> res;
    for (int i = 0; i < n; ++i) {
        if (mp[v[i].first] == 1 && mp[v[i].second] == 0)
            res.push_back(v[i].second);
        if (mp[v[i].first] == 0 && mp[v[i].second] == 1)
            res.push_back(v[i].first);
    }
    if (res.empty()) {
        cout << "SaiDe";
        return 0;
    }
    sort(res.begin(), res.end(), cmp);
    cout << res[0];

    return 0;
}
// https://code.ptit.edu.vn/student/question/NNLTC_001
// THỐNG KÊ PHẦN TỬ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    vector<int> v;
    map<int, int> mp;
    while (cin >> x) {
        v.push_back(x);
        mp[x]++;
    }

    for (int i = 0; i < v.size(); ++i) {
        if (mp[v[i]] != 0) {
            cout << v[i] << " " << mp[v[i]] << "\n";
            mp[v[i]] = 0;
        }
    }
    return 0;
}
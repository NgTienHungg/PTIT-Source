// https://codeforces.com/group/eFlt2UuXYv/contest/345055/problem/B
// B. Dãy con tăng dài nhất

#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);
using namespace std;

struct Data {
    int len;
    vector<int> lst;
};

int n;
vector<int> a;
vector<Data> v;

void read() {
    cin >> n;
    a.resize(n);
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

bool cmp(Data a, Data b) {
    if (a.len > b.len) return 1;
    if (a.len == b.len && a.lst < b.lst) return 1;
    return 0;
}

void solve() {
    for (int i = 0; i < n; ++i) {
        v[i].len = 1;
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j]) {
                if (v[j].len + 1 > v[i].len) {
                    v[i].len = v[j].len + 1;
                    v[i].lst = v[j].lst;
                    v[i].lst.push_back(a[i]);
                }
                else if (v[j].len + 1 == v[i].len) {
                    vector<int> temp = v[j].lst;
                    temp.push_back(a[i]);
                    
                    if (temp < v[i].lst) {
                        v[i].lst = temp;
                    }
                }
            }
        }

        // Nếu không có số nào đứng trước và nhỏ hơn a[i]
        if (v[i].lst.empty()) {
            v[i].lst.push_back(a[i]);
        }
    }
}   

void result() {
    sort(v.begin(), v.end(), cmp);
    vector<int> res = v[0].lst;

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}

int main() {
    faster();
    read();
    solve();
    result();
    return 0;
}
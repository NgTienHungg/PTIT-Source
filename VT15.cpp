// https://luyencode.net/problem/VT15
// VT15 - Tìm bộ 3 hoàn hảo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x > 0) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    vector<int> r;
    // 3 số dương lớn nhất
    if (a.size() >= 3) r.push_back(a[0] * a[1] * a[2]);
    // 2 số dương nhỏ nhất * 1 số âm lớn nhất
    if (a.size() >= 2 && b.size() >= 1) {
        int sz = a.size();
        r.push_back(a[sz - 1] * a[sz - 2] * b[0]);
    }
    // 1 số dương lớn nhất * 2 số âm nhỏ nhất
    if (a.size() >= 1 && b.size() >= 2) r.push_back(a[0] * b[0] * b[1]);
    // 3 số âm lớn nhất
    if (b.size() >= 3) {
        int sz = b.size();
        r.push_back(b[sz - 1] * b[sz - 2] * b[sz - 3]);
    }
    sort(r.rbegin(), r.rend());
    cout << r[0];
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0433
// SẮP XẾP THEO SỐ LẦN XUẤT HIỆN

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second) return 1;
    if (a.second == b.second && a.first < b.first) return 1;
    return 0;
}

void TestCase()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        m[x]++;
    }
    vector<pair<int, int>> v;
    for (auto x : m) {
        v.push_back(make_pair(x.first, x.second));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        for (int i = 1; i <= x.second; ++i) {
            cout << x.first << " ";
        }
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0534
// SỐ THUẬN NGHỊCH GIẢM DẦN

#include <bits/stdc++.h>
using namespace std;

bool isOK(string s) {
    int l = s.length();
    if (l == 1) return 0;
    for (int i = 0; i <= l / 2; ++i) {
        if (s[i] != s[l - i - 1])
            return 0;
    }
    return 1;
}

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.length() > b.first.length()) return 1;
    if (a.first.length() == b.first.length()) {
        if (a.first > b.first) return 1;
    }
    return 0;
}

int main()
{
    string s;
    map<string, int> m;
    while (cin >> s) {
        if (isOK(s))
            m[s]++;
    }
    vector<pair<string, int>> v;
    for (auto x : m) {
        v.push_back(make_pair(x.first, x.second));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
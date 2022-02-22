// https://code.ptit.edu.vn/student/question/CPP0419
// HỢP VÀ GIAO CỦA HAI DÃY SỐ - 2

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m, x;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; ++i) {
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp) {
        cout << x.first << " ";
    }
    cout << endl;
    for (auto x : mp) {
        if (x.second >= 2)
            cout << x.first << " ";
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

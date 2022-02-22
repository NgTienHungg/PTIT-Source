// https://code.ptit.edu.vn/student/question/CPP0274
// ĐẾM SỐ PHẦN TỬ LẶP LẠI

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        m[x]++;
    }
    int d = 0;
    for (auto x : m) {
        if (x.second > 1)
            d += x.second;
    }
    cout << d << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
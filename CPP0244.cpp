// https://code.ptit.edu.vn/student/question/CPP0244
// LIỆT KÊ SỐ KHÁC NHAU

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> se;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        se.insert(x);
    }
    for (auto x : se) cout << x << " ";
    return 0;
}
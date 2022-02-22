// https://code.ptit.edu.vn/student/question/CPP0428
// TRỘN HAI DÃY VÀ SẮP XẾP

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + m);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
// https://code.ptit.edu.vn/student/question/CPP0422
// SỐ 0 Ở CUỐI DÃY

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<long long> v;
    for (int i = 1; i <= n; ++i)
    {
        long long x;
        cin >> x;
        if (x > 0)
            v.push_back(x);
    }
    while (v.size() < n)
        v.push_back(0);
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
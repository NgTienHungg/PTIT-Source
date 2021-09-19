// https://code.ptit.edu.vn/student/question/CPP0414
// SẮP XẾP CHỮ SỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    bool dd[10] = {0};
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        for (auto x : s)
            dd[x - '0'] = 1;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (dd[i] == 1)
            cout << i << " ";
    }
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
// https://code.ptit.edu.vn/student/question/CPP0152
// CHIA DƯ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int a, m;
    cin >> a >> m;
    for (int i = 1; i < m; ++i)
    {
        if (a * i % m == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
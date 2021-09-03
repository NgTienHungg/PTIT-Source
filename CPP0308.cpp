// https://code.ptit.edu.vn/student/question/CPP0308
// KÝ TỰ KHÔNG LẶP

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int dd[26] = {0};
    for (auto x : s)
        dd[x - 'A']++;
    for (auto x : s)
    {
        if (dd[x - 'A'] == 1)
            cout << x;
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
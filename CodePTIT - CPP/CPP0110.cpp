// https://code.ptit.edu.vn/student/question/CPP0110
// MÃ SỐ QUỐC GIA

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    while (1)
    {
        int p = s.find("084");
        if (p == -1)
            break;
        s.erase(p, 3);
    }
    cout << s << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
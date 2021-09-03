// https://code.ptit.edu.vn/student/question/CPP0335
// TÌM SỐ LỚN NHẤT TRONG XÂU

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int r = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int p = i + 1;
            while (s[p] >= '0' && s[p] <= '9')
                p++;
            string t = s.substr(i, p - i);
            r = max(r, stoi(t));
            i = p;
        }
    }
    cout << r << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
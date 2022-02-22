// https://code.ptit.edu.vn/student/question/CPP0312
// XÂU PANGRAM

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    int k;
    cin >> s >> k;
    int dd[26] = {0};
    for (auto x : s)
        dd[x - 'a']++;
    int d = 0; // Số kí tự chưa xuất hiện
    for (int i = 0; i < 26; ++i)
    {
        if (!dd[i])
            d++;
    }
    cout << (s.length() >= 26 && k >= d) << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
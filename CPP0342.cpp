// https://code.ptit.edu.vn/student/question/CPP0342
// TÁCH SỐ VÀ TÍNH TỔNG

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    vector<char> v;
    int sum = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (isalpha(s[i]))
            v.push_back(s[i]);
        else
            sum += s[i] - '0';
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x;
    cout << sum << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
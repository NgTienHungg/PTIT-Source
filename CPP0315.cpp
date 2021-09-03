// https://code.ptit.edu.vn/student/question/CPP0315
// ĐỔI CHỖ CHỮ SỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int i = s.length() - 2, j = i + 1;
    while (s[i] <= s[i + 1]) i--;
    if (i < 0) {
        cout << "-1\n";
        return;
    }
    while (s[j] >= s[i]) j--;

    // Note:
    while (s[j] == s[j - 1]) j--;

    swap(s[i], s[j]);
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
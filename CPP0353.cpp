// https://code.ptit.edu.vn/student/question/CPP0353
// ĐIỆN THOẠI CỤC GẠCH

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

char num(char c) {
    if (c >= 'A' && c <= 'C') return '2';
    if (c >= 'D' && c <= 'F') return '3';
    if (c >= 'G' && c <= 'I') return '4';
    if (c >= 'J' && c <= 'L') return '5';
    if (c >= 'M' && c <= 'O') return '6';
    if (c >= 'P' && c <= 'S') return '7';
    if (c >= 'T' && c <= 'V') return '8';
    if (c >= 'W' && c <= 'Z') return '9';
}

void TestCase()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    string str = "";
    for (auto x : s)
        str.push_back(num(x));

    int l = str.length();
    for (int i = 0; i <= l / 2; ++i) {
        if (str[i] != str[l - i - 1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}
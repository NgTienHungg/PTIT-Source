// https://code.ptit.edu.vn/student/question/CPP0102
// CHỮ HOA – CHỮ THƯỜNG

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
        c -= 32;
    else if (c >= 'A' && c <= 'Z')
        c += 32;
    cout << c << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
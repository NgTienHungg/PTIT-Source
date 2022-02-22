// https://code.ptit.edu.vn/student/question/CPP0371
// LOẠI BỎ NGUYÊN ÂM

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') return 1;
    return 0;
}

int main()
{
    string s;
    cin >> s;
    for (auto x : s) {
        x = (char)tolower(x);
        if (!isVowel(x))
            cout << "." << x;
    }
    return 0;
}
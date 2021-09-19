// https://code.ptit.edu.vn/student/question/CPP0314
// CHÚC MỪNG NĂM MỚI

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<string> se;
    for (int i = 1; i <= n; ++i) {
        string s;
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size();
    return 0;
}
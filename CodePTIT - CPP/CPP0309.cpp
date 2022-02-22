// https://code.ptit.edu.vn/student/question/CPP0309
// ĐẾM TỪ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int d = 0;
    string str, s;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> s)
        d++;
    cout << d << endl;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
    return 0;
}
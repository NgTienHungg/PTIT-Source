// https://code.ptit.edu.vn/student/question/CPP0307
// HIỆU CỦA HAI TẬP TỪ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string s1, s2, tmp;
    getline(cin, s1);
    getline(cin, s2);

    map<string, bool> m;

    stringstream ss1(s1);
    while (ss1 >> tmp)
        m[tmp] = 1;

    stringstream ss2(s2);
    while (ss2 >> tmp)
    {
        if (m.find(tmp) != m.end())
            m.erase(m.find(tmp));
    }

    for (auto x : m)
        cout << x.first << " ";
    cout << endl;
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
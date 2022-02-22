// https://code.ptit.edu.vn/student/question/CPP0343
// DÃY ƯU THẾ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    string str, s;
    getline(cin, str);
    stringstream ss(str);
    vector<int> even, odd;
    while (ss >> s)
    {
        int x = stoi(s);
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    if ((even.size() + odd.size()) % 2 == 0 && even.size() > odd.size())
        cout << "YES\n";
    else if ((even.size() + odd.size()) % 2 == 1 && odd.size() > even.size())
        cout << "YES\n";
    else
        cout << "NO\n";
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
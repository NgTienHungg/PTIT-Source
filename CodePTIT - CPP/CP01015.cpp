// https://code.ptit.edu.vn/student/question/CP01015
// TÌM SỐ DƯ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int mod(int n, int k)
{
    if (k == 2)
    {
        if (n % 4 == 0)
            return 1;
        if (n % 4 == 1)
            return 2;
        if (n % 4 == 2)
            return 4;
        return 3;
    }
    else if (k == 3)
    {
        if (n % 4 == 0)
            return 1;
        if (n % 4 == 1)
            return 3;
        if (n % 4 == 2)
            return 4;
        return 2;
    }
    else if (k == 4)
    {
        if (n % 2 == 0)
            return 1;
        return 4;
    }
}

void TestCase()
{
    string s;
    cin >> s;
    if (s.length() > 2)
        s = s.substr(s.length() - 2, 2);
    int n = stoi(s);
    int res = 1 + mod(n, 2) + mod(n, 3) + mod(n, 4);
    cout << res % 5 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
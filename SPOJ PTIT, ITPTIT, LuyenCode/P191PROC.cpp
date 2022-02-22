// https://www.spoj.com/PTIT/problems/P191PROC/
// P191PROC - Problem C - Tin nhắn

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    getline(cin, s);
    vector<bool> space(s.length());
    string temp = "";
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
            space[i] = 1;
        else
        {
            space[i] = 0;
            temp += s[i];
        }
    }
    temp[0] = tolower(temp[0]);
    temp += temp[0];
    temp.erase(0, 1);
    temp[0] = toupper(temp[0]);
    int index = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (space[i])
            cout << ' ';
        else
            cout << temp[index++];
    }
    cout << "ee\n";
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
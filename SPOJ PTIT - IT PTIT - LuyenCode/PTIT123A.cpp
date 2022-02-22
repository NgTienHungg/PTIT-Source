// https://www.spoj.com/PTIT/problems/PTIT123A/
// PTIT123A - Sắp xếp 2

#include <bits/stdc++.h>
using namespace std;

bool stop = 0;

bool isNum(string s)
{
    return (s[0] == '-' || (s[0] >= '0' && s[0] <= '9'));
}

void solve()
{
    string s;
    vector<string> Words;
    vector<int> Nums, Type;
    while (1)
    {
        cin >> s;
        if (s == ".")
        {
            stop = 1;
            return;
        }
        char c = s.back();
        s.erase(s.length() - 1, 1);
        if (isNum(s))
        {
            Nums.push_back(stoi(s));
            Type.push_back(1);
        }
        else
        {
            Words.push_back(s);
            Type.push_back(0);
        }
        if (c == '.')
            break;
    }
    sort(Nums.begin(), Nums.end());
    sort(Words.begin(), Words.end());
    int n1 = 0, n2 = 0;
    for (int i = 0; i < Type.size(); i++)
    {
        if (Type[i])
            cout << Nums[n1++];
        else
            cout << Words[n2++];
        if (i != Type.size() - 1)
            cout << ", ";
        else
            cout << ".\n";
    }
}

int main()
{
    while (1)
    {
        solve();
        if (stop)
            break;
    }
    return 0;
}
// https://codeforces.com/group/eFlt2UuXYv/contest/328128/problem/B
// B. [ProPTIT-Algorithm-Sort and Search] Sắp xếp xâu kí tự

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int t;
string s;

bool isNumber(char c)
{
    return (c == '-' || (c >= '0' && c <= '9'));
}

void solve()
{
    vector<bool> type;   // 1: số, 0: từ
    vector<int> num;     // Số
    vector<string> word; // Từ
    bool stop = 0;

    while (1)
    {
        cin >> s;
        if (s.back() == '.')
            stop = 1;
        s.pop_back();
        bool kt = isNumber(s[0]);
        type.push_back(kt);
        if (kt)
            num.push_back(stoi(s));
        else
            word.push_back(s);
        if (stop)
            break;
    }

    sort(num.begin(), num.end());
    sort(word.begin(), word.end());

    int n = 0; // Số lượng số
    int w = 0; // Số lượng từ
    for (int i = 0; i < type.size(); i++)
    {
        if (type[i])
            cout << num[n++];
        else
            cout << word[w++];

        if (i == type.size() - 1)
            cout << ".\n";
        else
            cout << ", ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> t;
    while (t--)
        solve();
    return 0;
}
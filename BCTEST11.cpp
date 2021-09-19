// https://www.spoj.com/PTIT/problems/BCTEST11/
// BCTEST11 - Số chia may mắn

#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    while (n > 0)
    {
        int tmp = n % 10;
        n /= 10;
        if (tmp != 4 && tmp != 7)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= 1000; i++)
        if (check(i) == 1)
            v.push_back(i);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > n)
            break;
        if (n % v[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
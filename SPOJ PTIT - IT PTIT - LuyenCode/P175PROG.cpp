// https://www.spoj.com/PTIT/problems/P175PROG/
// P175PROG - ROUND 5G - Magician

#include <bits/stdc++.h>
using namespace std;

struct Challenge
{
    int id;
    string hero;
    string result;
};

int main()
{
    int n;
    cin >> n;
    vector<Challenge> v(n);
    vector<Challenge> res;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].id >> v[i].hero >> v[i].result;
        if (v[i].result == "W" && v[i].hero == "AM")
            res.push_back(v[i]);
    }
    int len = res.size();
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (res[j].id < res[i].id)
                swap(res[i], res[j]);
        }
    }
    cout << res[0].id;
    return 0;
}
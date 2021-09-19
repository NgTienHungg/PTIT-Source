// https://www.spoj.com/PTIT/problems/BCTHIDAU/
// BCTHIDAU - Thi đấu

#include <bits/stdc++.h>
using namespace std;

struct Team
{
    string name;
    int p1, p2, p3, p4;
    int t1, t2, t3, t4;
    int solve = 0;
    int penalty = 0;
};

void init(vector<Team> &v, int i)
{
    cin >> v[i].name;
    cin >> v[i].p1 >> v[i].t1;
    cin >> v[i].p2 >> v[i].t2;
    cin >> v[i].p3 >> v[i].t3;
    cin >> v[i].p4 >> v[i].t4;
    if (v[i].t1 != 0)
    {
        v[i].solve++;
        v[i].penalty += v[i].t1 + 20 * (v[i].p1 - 1);
    }
    if (v[i].t2 != 0)
    {
        v[i].solve++;
        v[i].penalty += v[i].t2 + 20 * (v[i].p2 - 1);
    }
    if (v[i].t3 != 0)
    {
        v[i].solve++;
        v[i].penalty += v[i].t3 + 20 * (v[i].p3 - 1);
    }
    if (v[i].t4 != 0)
    {
        v[i].solve++;
        v[i].penalty += v[i].t4 + 20 * (v[i].p4 - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<Team> v(n);
    for (int i = 0; i < n; i++)
        init(v, i);
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
        {
            if (v[j].solve > v[i].solve)
                swap(v[i], v[j]);
            else if (v[j].solve == v[i].solve)
                if (v[j].penalty < v[i].penalty)
                    swap(v[i], v[j]);
        }
    cout << v[0].name << " " << v[0].solve << " " << v[0].penalty;
    return 0;
}
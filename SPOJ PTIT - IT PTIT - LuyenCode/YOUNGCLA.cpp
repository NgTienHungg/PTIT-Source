// https://www.spoj.com/PTIT/problems/YOUNGCLA/
// YOUNGCLA - Birthdates

#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string name;
    int d, m, y;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<Person> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].name >> v[i].d >> v[i].m >> v[i].y;
    }
    // Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (v[j].y > v[i].y)
                swap(v[i], v[j]);
            else if (v[j].y == v[i].y)
            {
                if (v[j].m > v[i].m)
                    swap(v[i], v[j]);
                else if (v[j].m == v[i].m)
                {
                    if (v[j].d > v[i].d)
                        swap(v[i], v[j]);
                }
            }
        }
    }
    cout << v[0].name << endl
         << v[v.size() - 1].name;
    return 0;
}
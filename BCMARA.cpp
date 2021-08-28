// https://www.spoj.com/PTIT/problems/BCMARA/
// BCMARA - Chạy đua marathon

#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int h;
    int m;
    int s;
};

int main()
{
    int n;
    cin >> n;
    vector<Time> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].h >> v[i].m >> v[i].s;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j].h < v[i].h)
                swap(v[i], v[j]);
            else if (v[j].h == v[i].h)
            {
                if (v[j].m < v[i].m)
                    swap(v[i], v[j]);
                else if (v[j].m == v[i].m)
                {
                    if (v[j].s < v[i].s)
                        swap(v[i], v[j]);
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << v[i].h << " " << v[i].m << " " << v[i].s << endl;
    return 0;
}